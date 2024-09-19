# Desenvolva um programa em Python que resolva o problema do Caixeiro Viajante (Travelling Salesman Problem - TSP) usando uma abordagem de força bruta. O problema do Caixeiro Viajante consiste em encontrar o caminho mais curto que visita cada cidade exatamente uma vez e retorna à cidade de origem. O programa deve receber uma matriz de distâncias entre cidades e calcular a menor rota possível. O programa deve tratar erros de entrada, como matrizes de distâncias não quadradas, entradas não numéricas ou valores negativos.

# Entrada
# 2 [0 10 10 0]

# Saída
# Menor distância: 20
# Rota: [0, 1, 0]

# Entrada
# 1 [0]

# Saída
# Erro: entrada inválida, por favor insira uma matriz de distâncias maior que 1x1

# Entrada
# 3 [0 10 -5 10 0 15 -5 15 0]

# Saída
# Erro: entrada inválida, por favor insira uma matriz de distâncias com valores não negativos

# Entrada
# 4 [0 10 15 10 0 35 25 15 35 0 30 20 25 30 0]

# Saída
# Erro: entrada inválida, por favor insira uma matriz de distâncias quadrada

import itertools

entrada = input().strip()
matriz = entrada.split("[")[1].split("]")[0].split(" ")
numero = int(entrada.strip()[0])
if numero == 1:
    print("Erro: entrada inválida, por favor insira uma matriz de distâncias maior que 1x1")
elif numero**2 != len(matriz):
    print("Erro: entrada inválida, por favor insira uma matriz de distâncias quadrada")
elif any(int(n) < 0 for n in matriz): 
    print("Erro: entrada inválida, por favor insira uma matriz de distâncias com valores não negativos")
else:
    matriz_distancias = []
    for i in range(numero):
        linha = list(map(int, matriz[i * numero: (i + 1) * numero]))
        matriz_distancias.append(linha)

    cidades = list(range(numero))
    rotas = itertools.permutations(cidades[1:])  # Fixar a cidade 0 como ponto de partida e chegada

    menor_distancia = float('inf')
    melhor_rota = []

    for rota in rotas:
        rota_completa = [0] + list(rota) + [0]  # Começar e terminar na cidade 0
        distancia_total = 0

        for i in range(len(rota_completa) - 1):
            distancia_total += matriz_distancias[rota_completa[i]][rota_completa[i + 1]]

        if distancia_total < menor_distancia:
            menor_distancia = distancia_total
            melhor_rota = rota_completa

    print(f"Menor distância: {menor_distancia}\nRota: {melhor_rota}")
