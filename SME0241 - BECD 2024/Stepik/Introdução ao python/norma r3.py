# Faça um programa que leia dois pontos em R³ e calcule a norma ℓ1 entre esses pontos.
# A norma ℓ1 também é conhecida como distância Manhattan, ou métrica do táxi

# Sejam p1 = (x1, y1, z1) e p2 = (x2, y2, z2), então a distância de ℓ1 é dada por:
# dist1 (p1, p2) = ∣x1 - x2∣ + ∣y1 - y2∣ + ∣z1 - z2∣ 

# Entrada:
# x1 y1 z1
# x2 y2 z2

# Saída:
# l1

# Sample Input:
# 2.66 19.52 15.60
# 9.54 44.32 23.80

# Sample Output:
# 39.88

def modulo(n):
    if n < 0:
        return n * -1
    return n

entrada1 = input().split()
entrada2 = input().split()
lista1 = list(map(float, entrada1))
lista2 = list(map(float, entrada2)) 
dist = modulo(lista1[0]-lista2[0]) + modulo(lista1[1]-lista2[1]) + modulo(lista1[2]-lista2[2]) 
print('%.2f' % (dist))
