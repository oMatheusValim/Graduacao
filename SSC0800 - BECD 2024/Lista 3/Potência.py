# Implemente uma função recursiva que calcule a potência de um número inteiro base elevado a um expoente exp.

# Entrada
# 2 3

# Saída
# 8

def potencia(base, expoente):
    if expoente == 0:
        return 1
    else:
        return base * potencia(base, expoente-1)
entrada = input().split()
base = int(entrada[0])
expoente = int(entrada[1])
resul = potencia(base, expoente)
print(resul)

# FEITO