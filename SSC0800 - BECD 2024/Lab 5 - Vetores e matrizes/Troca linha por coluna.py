# Crie um programa que leia uma matriz 5x5 usando numpy e troque os elementos da 3ª linha pela 3ª coluna e vice-versa. Obs: considere que a 3ª linha e a 3ª coluna da matriz referem-se ao índice 2. A troca deve ser feita após após a leitura de todos os elementos da matriz.

import numpy as np
num_linhas = 5
num_colunas = 5
matriz = []
while len(matriz) < num_linhas:
    vetores = []
    while len(vetores) < num_colunas:
        entrada = float (input())
        vetores.append(entrada)
    matriz.append(vetores) 
matriz[0][2], matriz[2][0] = matriz[2][0], matriz[0][2]
matriz[1][2], matriz[2][1] = matriz[2][1], matriz[1][2]
matriz[2][2], matriz[2][2] = matriz[2][2], matriz[2][2]
matriz[3][2], matriz[2][3] = matriz[2][3], matriz[3][2]
matriz[4][2], matriz[2][4] = matriz[2][4], matriz[4][2]
resul = np.array(matriz)
print(resul)