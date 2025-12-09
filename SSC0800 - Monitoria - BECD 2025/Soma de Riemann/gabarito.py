import math

z = float(input())
n = int(input())

deltaX = z/n
area = 0
for i in range(0, n):
    x = i*deltaX + deltaX/2
    phi = 1/math.sqrt(2*math.pi) * math.exp(-(x**2) / 2)
    area += phi*deltaX
print(f'{area:.4f}')