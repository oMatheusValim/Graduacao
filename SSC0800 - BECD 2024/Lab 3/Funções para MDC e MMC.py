# Crie duas funções que recebam 3 números inteiros. Uma delas deve retornar o máximo divisor comum (m.d.c.) e a outra, o mínimo múltiplo comum (m.m.c.) desses números. 

# Crie um programa que leia 3 números inteiros, execute as duas funções e mostre o mmc e o mdc desses números.

import math

def mdc_de_tres(n1, n2, n3):
    return math.gcd(math.gcd(n1, n2), n3)

def mmc(a, b):
    return abs(a * b) // math.gcd(a, b)

def mmc_de_tres(n1, n2, n3):
    return mmc(mmc(n1, n2), n3)

n1 = int(input())
n2 = int(input())
n3 = int(input())

multiplO_comum = mmc_de_tres(n1, n2, n3)
divisor_comum = mdc_de_tres(n1, n2, n3)
print(f"{divisor_comum} {multiplO_comum}")
