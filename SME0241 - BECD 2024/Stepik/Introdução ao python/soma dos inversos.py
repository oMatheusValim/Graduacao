# Faça um programa que leia 3 valores e mostre a soma de seus inversos.

# Formato de entrada:
# a b c

# Sample Input:
# 43.51 10.74 2.43

# Sample Output:
# 0.53

def inverso(n):
    new =  0
    numeros = list(map(float, n))
    for i in numeros:
       new += 1/i
    return new

entrada = input().split(" ")
soma = inverso(entrada)
print('%.2f' % (soma))
