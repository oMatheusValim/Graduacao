# Desenvolva um programa em Python que receba um número inteiro N e imprima os primeiros N termos da sequência de Fibonacci. O código deve retornar os primeiros N termos da sequência.

# Entrada
# 5

# Saída
# 0 1 1 2 3

lista = [0, 1]
posi = int(input())
if posi == 1:
    print(0)
else:
    while len(lista) < posi:
        soma = lista[-1] + lista[-2]
        lista.append(soma)
    print(" ".join(map(str, lista)))
