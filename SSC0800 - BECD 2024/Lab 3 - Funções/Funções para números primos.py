# Criar um programa que lê um número e gerar todos os números primos entre 2 e o número fornecido pelo usuário, escrevendo na tela o resultado.

import math

def primo(n):
    primos = []
    for i in range(2, n+1):
        primo_sim = True
        for p in range(2, int(math.sqrt(i) + 1)):
            if i % p == 0:
                primo_sim = False
                break
        if primo_sim:
            primos.append(i)
    return primos

limite = int(input())
veri = primo(limite)
print("\n".join(map(str, veri)))
