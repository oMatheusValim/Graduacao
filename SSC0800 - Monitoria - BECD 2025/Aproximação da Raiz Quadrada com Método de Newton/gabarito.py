import numpy as np

# 1. Leitura e processamento da entrada
linha = input().split()
E = float(linha[0])
N = int(linha[1])

# 2. Criação do vetor NumPy para armazenar as N aproximações
# É importante definir o tipo de dado (dtype) como float para precisão
aproximacoes = np.zeros(N, dtype=float)

# 3. Cálculo da primeira aproximação (R_1)
if N > 0:
    aproximacoes[0] = E / 2

# 4. Loop para as N-1 iterações restantes
# O loop vai de 1 até N-1, totalizando N-1 passos
for i in range(1, N):
    # Pega a aproximação anterior do vetor
    r_anterior = aproximacoes[i-1]
    
    # Calcula a nova aproximação e armazena na posição atual
    aproximacoes[i] = (r_anterior + E / r_anterior) / 2

# 5. O resultado final é o último elemento calculado no vetor
resultado_final = aproximacoes[N-1]

# 6. Impressão formatada
print(f"{resultado_final:.6f}")
