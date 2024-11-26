# Ler uma lista A de 10 elementos inteiros. Determinar e imprimir a maior diferença entre dois elementos consecutivos desse vetor.

# Obs: A diferença entre 2 elementos consecutivos é a diferença entre o elemento posterior e o anterior. Calcular as diferenças após ler todo o vetor.
# Obs 2: use a função abs() para obter o valor absoluto da diferença


lista_A = []
while len(lista_A) < 10:
    entrada = int(input().strip())
    lista_A.append(entrada)
dife = []
i = 0
while i != len(lista_A):
    dife.append(abs(lista_A[i] - lista_A[i-1]))
    i += 1
dife.sort()
print(dife[9])
