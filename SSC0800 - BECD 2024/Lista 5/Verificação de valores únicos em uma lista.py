# Dada uma lista de números, escreva uma função que retorne True se todos os elementos forem únicos e False se houver elementos repetidos.

# Entrada
# "1 2 3 4"

# Saída
# True

def veri(n, j = 0):
    while j < len(n)-1:
        if n[j] == n[j+1]:
            return False
        else:
            return veri(n, j+1)
    return True
entrada = input().split()
result = veri(entrada)
print(result)

# FEITO