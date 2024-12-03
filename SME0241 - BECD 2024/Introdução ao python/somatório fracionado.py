# Dado um inteiro positivo n>= 1, faça um programa que calcule a soma:
# S = 1 - 1/2 + 1/3 - 1/4 + ... +- 1/n 

# ENTRADA
# n

# SAÍDA
# S

# Sample input
# 5

# Sample output
# 0.78

numero = int(input())
somas = []
for i in range(1, numero+1):
    if i % 2 == 0:
        valor = -(1/i)
        somas.append(valor)
    else:
        valor = 1/i
        somas.append(valor)

result = sum(somas)
print(f'{result:.2f}')
