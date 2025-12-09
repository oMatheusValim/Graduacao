import math
reps = int(input())
pontos = []
while len(pontos)<reps:
    x, y = map(int, input().split())
    pontos.append([x, y])

distancia = 0
for i in range(reps -1):
    distancia += math.sqrt((pontos[i][0]- pontos[i+1][0])**2 + (pontos[i][1]- pontos[i+1][1])**2)

print(f'{distancia:.4f}')
