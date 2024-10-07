#O Problema da Galeria de Arte consistem em determinar qual o menor número possível de câmeras a serem instaladas e suas posições dado um polígono simples de n vértices. Implemente a triangulação 3-colorida

#import matplotlib.pyplot as plt
import numpy as np

def veri_baricentro(A, B, C, p):
    matriz = np.array([[1., 1., 1.], [A[0], B[0], C[0]], [A[1], B[1], C[1]]])
    vetorB = np.array([1., p[0], p[1]]) 
    return np.linalg.solve(matriz, vetorB)

def convexo(A, B, C):
    return np.cross(B-A, C-A) > 0

def veri_ponto_interno(A, B, C, pontos):
    tolerancia = 1e-12
    num_pontos = pontos.shape[0]
    for i in range(num_pontos):
        baricentro = veri_baricentro(A, B, C, pontos[i, :])
        if baricentro[0] > tolerancia and baricentro[1] > tolerancia and baricentro[2] > tolerancia:
            return False
    return True        

def triangulacao(P):
    triangulos = []
    num_pontos = P.shape[0]
    vertices = list(range(num_pontos))
    while len(vertices) > 3:
        comprimento = len(vertices)
        for i in range(comprimento):
            antes, agora, prox = vertices[i-1], vertices[i], vertices[(i+1)%comprimento]
            if convexo(P[antes, :], P[agora, :], P[prox, :]):
                if veri_ponto_interno(P[antes, :], P[agora, :], P[prox, :], P[vertices, :]):
                    triangulos.append((antes, agora, prox))
                    del vertices[i]
                    break
    triangulos.append(vertices)
    return triangulos

def coloracao(n, triangulos):
    cores = [-1] * n
    for trian in triangulos:
        usar_cores = {cores[trian[0]], cores[trian[1]], cores[trian[2]]}    
        usar_cores.discard(-1)
        avaliar_cores = {0, 1, 2} - usar_cores
        for v in trian:
            if cores[v] == -1:
                cores[v] = avaliar_cores.pop()
    return cores

def galeria_resolvida(vert):
    PP = np.array(vert)
    triangulos = triangulacao(PP)
    cores = coloracao(len(vert), triangulos)
    num_cores = [cores.count(c) for c in range(3)]
    min_cores = num_cores.index(min(num_cores))
    posicao_camera = [i for i in range(len(cores)) if cores[i] == min_cores]
    return posicao_camera

num_pontos = int(input())
pontos = []
while len(pontos) < num_pontos:
    entrada = list(map(int, input().split()))
    pontos.append(entrada[1:])
cameras = galeria_resolvida(pontos)
print(" ".join(map(str, cameras)))

# PP = np.array(pontos)
# trigs = triangulacao(PP)
# plt.title("Galeria de Arte")
# plt.xlabel("Eixo X")
# plt.ylabel("Eixo Y")
# plt.fill(PP[:, 0], PP[:, 1])
# plt.triplot(PP[:, 0], PP[:, 1], trigs, color = 'r')
# plt.scatter(PP[:, 0], PP[:, 1], color = 'k')
# for posi in cameras:
#     plt.text(PP[posi][0], PP[posi][1], f'' ,color = 'blue', fontsize = 12)
# plt.show()