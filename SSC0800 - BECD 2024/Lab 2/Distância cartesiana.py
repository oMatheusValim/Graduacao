# Crie uma função que receba as coordenadas de 2 pontos no plano cartesiano (x,y) e retorne a distância entre eles. Crie um programa que lê as coordenadas, executa a função e imprime a distância.
import math
d1 = input().split(",")
d2 = input().split(",")
x1 = int(d1[0])
y1 = int(d1[1])
x2 = int(d2[0])
y2 = int(d2[1])
distância = math.sqrt((x1-x2)**2+(y1-y2)**2)
print(distância)
