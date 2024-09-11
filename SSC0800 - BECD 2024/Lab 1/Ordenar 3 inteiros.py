# Escrever um programa que leia 3 valores inteiros A, B e C, e os escreva em ordem crescente.

v1 = int (input ())
v2 = int (input ())
v3 = int (input ())
lista = []
lista.append(v1)
lista.append(v2)
lista.append(v3)
ordem = sorted(lista)
passa= list(map(str, ordem))
print(" ".join(passa))