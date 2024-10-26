# Crie uma função recursiva que inverta ordem dos elementos presentes em um vetor com 10 inteiros. Leia os valores do vetor, execute a função e imprima o vetor.

# ENTRADA
# 1
# 2
# 2
# 2
# 3
# 3
# 4
# 5
# 6
# 7

# SAÍDA
# [7, 6, 5, 4, 3, 3, 2, 2, 2, 1]

def inv(n, i = 0):
    if i == len(n):
        return []
    return inv(n, i+1) + [n[i]]
vetor = []
while len(vetor) < 10:
    entrada = int(input().strip())
    vetor.append(entrada)
print(inv(vetor))