# Crie um programa que lê 3 valores inteiros correspondentes aos lados de um triângulo. O programa deve verificar se o triângulo é válido e classificá-lo como Isósceles, Equilátero ou Escaleno ou Inválido.

lado1 = int(input())
lado2 = int(input())
lado3 = int(input())
if lado1 == lado2 == lado3:
  print("Equilátero")
elif lado1 + lado2 < lado3 or lado3 + lado2 < lado1 or lado1 + lado3 < lado2:
  print("Inválido")
elif lado1 == lado2 or lado1 == lado3 or lado2 == lado3:
  print("Isósceles")
elif lado1 != lado2 != lado3:
  print("Escaleno")