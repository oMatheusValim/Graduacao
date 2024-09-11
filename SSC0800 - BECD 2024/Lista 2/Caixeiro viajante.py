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

