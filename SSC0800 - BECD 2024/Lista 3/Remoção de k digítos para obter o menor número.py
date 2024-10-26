# Dada uma string numérica num e um número inteiro k, remova exatamente k dígitos da string para formar o menor número possível. A função deve retornar a menor string numérica possível após a remoção. Se o número resultante tiver zeros à esquerda, remova-os.

# Entrada
# 1432219 3

# Saída
# 1219

def remover_k(n1, n2):
    pilha = []
    for dig in n1:
        while n2 > 0 and pilha and pilha[-1] > dig:
            pilha.pop()
            n2 -= 1
        pilha.append(dig)
    pilha = pilha[:-n2] if n2 > 0 else pilha
    return ''.join(pilha).lstrip('0') or '0'

entrada = input().split()
inteiro_k = int(entrada[-1])
numero_original = entrada[0]
result = remover_k(numero_original, inteiro_k)
print(result)
<<<<<<< HEAD

# FEITO
=======
>>>>>>> 24ae77e711349f7b27af18ea98149085a6f9ecc7
