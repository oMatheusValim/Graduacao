# Dados os raios e os centros de dois círculos (como descrito abaixo), verifique se existe intersecção entre eles, escreva S para caso exista, e N caso contrario.

# Entrada:
# X1 Y1 R1
# X2 Y2 R2

# Saída:
# R

# Sample Input:
# 0.46 0.05 0.28
# 0.59 0.21 0.48

# Sample Output:
# S
import math
entrada1 = input().split()
entrada2 = input().split()
cir1 = list(map(float, entrada1))
cir2 = list(map(float, entrada2))
dist_raios = math.sqrt(((cir1[0])-cir2[0])**2 +(cir1[1]-cir2[1])**2)
if dist_raios <= (cir1[2]+cir2[2]):
    print("S")
else:
    print("N")
