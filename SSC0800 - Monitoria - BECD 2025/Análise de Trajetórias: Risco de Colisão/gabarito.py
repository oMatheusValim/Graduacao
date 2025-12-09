import numpy as np

x, y = map(int, input().split())
p1 = np.array([x, y])
x, y = map(int, input().split())
p2 = np.array([x, y])
x, y = map(int, input().split())
p3 = np.array([x, y])
x, y = map(int, input().split())
p4 = np.array([x, y])

v1 = p2 - p1
v2 = p3 - p4
matriz_A = np.array([v1, v2]).T

vb = p3-p1

try:
    t, u = np.linalg.solve(matriz_A, vb)
except:
    t, u = -1, -1

if 0 <= t and t <= 1 and 0 <= u and u <= 1:
    print("SIM")
else:
    print("NAO")
