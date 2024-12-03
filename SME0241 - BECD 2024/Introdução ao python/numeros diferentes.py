 # Faça um programa que leia um vetor de números inteiros com 10 posições, e conte quantos valores diferentes existem no vetor.
 
 # Sample input
 # 10 0 4 6 6 9 4 3 14 5
 
 # Sample output
 # 8
 
vetor = input().split()
numeros = list(map(int, vetor))
diferentes = set(numeros)
print(len(diferentes))
