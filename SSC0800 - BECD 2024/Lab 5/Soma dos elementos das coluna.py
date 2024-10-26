# Faça um programa que leia uma matriz 4x5 de inteiros e calcule a soma dos elementos de cada coluna, armazenando o resultado da soma, em um vetor de 5 elementos. Imprimir os valores armazenados no vetor.

num_linhas = 4
num_colunas = 5
matriz = []
vetores = []
while len(matriz) < num_linhas:
    while len(vetores) < num_colunas:
        entrada = int (input().strip())
        vetores.append(entrada)
    matriz.append(vetores)
    vetores = []
somas = []    
linha = 0
coluna = 0
while coluna < num_colunas:
    guardar = 0
    linha = 0
    while linha < num_linhas :
        cont = matriz[linha][coluna]
        guardar += cont 
        linha += 1
    somas.append(guardar)
    coluna += 1
print(somas)