# Faça um programa para calcular o valor da seguinte série: 1/1 + 3/2 + 5/3 + 7/4 + ... 99/50

a = 1
b = 1
soma = 1
while a != 99 and b != 50:
  a += 2
  b += 1
  soma += a/b
print(soma)

# FEITO    