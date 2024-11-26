# Desenvolva um código em Python que leia duas matrizes 2x2 e escreva a matriz resultante da multiplicação dessas duas matrizes.

# Entrada
# A entrada será fornecida no seguinte formato:
# a11 a12
# a21 a22
# b11 b12
# b21 b22

# Saída
# A saída será uma matriz 2x2 resultante da multiplicação das duas matrizes:
# c11 c12
# c21 c22

linhaA1 = input().split(" ")
linhaA2 = input().split(" ")
linhaB1 = input().split(" ")
linhaB2 = input().split(" ")
a11 = int (linhaA1[0])
a12 = int (linhaA1[1])
a21 = int (linhaA2[0])
a22 = int (linhaA2[1])
b11 = int (linhaB1[0])
b12 = int (linhaB1[1])
b21 = int (linhaB2[0])
b22 = int (linhaB2[1])
c11 = a11 * b11 + a12 * b21
c12 = a11 * b12 + a12 * b22
c21 = a21 * b11 + a22 * b21
c22 = a21 * b12 + a22 * b22
print ('%d %d\n%d %d'%(c11, c12, c21, c22))
