# Faça um programa em Python que dado dois segmentos retorne True se os segmentos possuem interseção ou False caso contrário. 
# Desenhe os segmentos de entrada para testar os seus resultados.

import numpy as np
import matplotlib.pyplot as plt

def sinal_pontos(u,v):
    return u[0]*v[1] - u[1]*v[0]

def veri_mao_direita(A, B, C, D):
    return sinal_pontos(B-A, C-A) * sinal_pontos(B-A, D-A) < 0 and sinal_pontos(D-C, A-C) * sinal_pontos(D-C, B-C) < 0

def obter_ponto(nome):
    while True:
        try:
            ponto = input(f"Digite o x,y do ponto {nome}: ")
            x, y = map(float, ponto.split(","))
            return np.array([x, y])
        except ValueError:
            print("Erro: Digite um ponto no formato x,y")

print("A coordenada do ponto tem que ser do tipo x,y")
A = obter_ponto("A")
B = obter_ponto("B")
C = obter_ponto("C")
D = obter_ponto("D")

if veri_mao_direita(A, B, C, D):
    print("True")
else:
    print("False")
    
plt.plot([A[0], B[0]], [A[1], B[1]],'b', color="blue")
plt.plot([C[0], D[0]], [C[1], D[1]], 'r', color="green")
plt.title("Interseção entre dois segmentos")
plt.xlabel("Eixo X")
plt.ylabel("Eixo Y")
plt.show()
