#O Problema da Galeria de Arte consistem em determinar qual o menor número possível de câmeras a serem instaladas e suas posições dado um polígono simples de n vértices. Implemente a triangulação 3-colorida

import numpy as np

num_triangulos = int(input())
pontos_triangulo = []
while len(pontos_triangulo) < num_triangulos:
    entrada = list(map(int, input().split()))
    pontos_triangulo.append(entrada)

cores = np.zeros(num_triangulos+2)
cores[pontos_triangulo[0][0]] = 1
cores[pontos_triangulo[0][1]] = 2
cores[pontos_triangulo[0][2]] = 3
cor_faltante = np.count_nonzero(cores == 0)
while cor_faltante > 0:
    for i in range(num_triangulos):
        linha = pontos_triangulo[i]
        definidos = [v for v in linha if cores[v] != 0]
        indefinido = [v for v in linha if cores[v] == 0]
        if len(definidos) == 2 and len(indefinido) == 1:
            cores_faltando = {1, 2, 3} - {cores[v] for v in definidos}
            cores[indefinido[0]] = cores_faltando.pop() 
            cor_faltante -= 1  

cor1 = np.count_nonzero(cores==1)
cor2 = np.count_nonzero(cores==2)
cor3 = np.count_nonzero(cores==3)

if cor1 < cor2 and cor1 < cor3:
    indices = np.where(cores == 1)
elif cor2 < cor1 and cor2 < cor3:
    indices = np.where(cores == 2)
elif cor3 < cor2 and cor3 < cor1:
    indices = np.where(cores == 3)

for i, l in enumerate(indices):
    posi = list(l)
    print(" ".join(map(str, posi)))
