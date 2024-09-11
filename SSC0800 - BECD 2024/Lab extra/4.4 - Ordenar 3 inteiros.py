# Escrever um programa que leia 3 valores inteiros A, B e C, e os escreva em ordem crescente. Obs: não utilizar o comando sort.

n1 = int(input())
n2 = int(input())
n3 = int(input())
if n1 < n2 < n3:
  print(n1, n2, n3)
elif n1 < n3 < n2:
  print(n1, n3, n2)
elif n2 < n1 < n3:
  print(n2, n1, n3)
elif n2 < n3 < n1:
  print(n2, n3, n1)
elif n3 < n1 < n2:
  print(n3, n1, n2)
else:
  print(n3, n2, n1)