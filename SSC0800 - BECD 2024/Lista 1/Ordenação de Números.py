'''Desenvolva um código em Python que leia uma lista de números inteiros e escreva a lista em ordem crescente.

ENTRADA
A entrada será uma sequência de números inteiros separados por espaço

5 3 8 6 2 

SAÍDA
A saída será a lista de números inteiros em ordem crescente, separados por espaço.

2 3 5 6 8'''
num = input()
num_list = list(map(int, num.split()))
num_list.sort()
print(" ".join(map(str, num_list)))

# FEITO
