# Crie uma função recursiva que receba um número inteiro positivo n e retorne a soma dos números inteiros de 1 a n.

# Entrada
# 5

# Saída
# 15

def soma(n):
    if n == 0:
        return 0
    else:
        return n + soma(n-1)
entrada = int(input())
resul = soma(entrada)
print(resul)

# FEITO