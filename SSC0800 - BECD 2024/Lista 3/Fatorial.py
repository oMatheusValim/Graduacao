# Implemente uma função recursiva que receba um número inteiro n e retorne o fatorial de n.

# Entrada
# 4
# Saída
# 24

def fatorial_recursivo(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * fatorial_recursivo(n - 1)
    
numero = int(input())
resultado = fatorial_recursivo(numero)
print(resultado)
