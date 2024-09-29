# Crie uma função recursiva que receba dois números inteiros a e b e retorne o produto desses dois números sem usar o operador de multiplicação (*).

# Entrada
# 4 3

# Saída
# 12

def produto(n1, n2):
    if n2 < 1:
        return 0
    else:
        return n1 + produto(n1, n2-1)

entrada = input().split()
n1 = int(entrada[0])
n2 = int(entrada[1])
resul = produto(n1, n2)
print(resul)

# FEITO