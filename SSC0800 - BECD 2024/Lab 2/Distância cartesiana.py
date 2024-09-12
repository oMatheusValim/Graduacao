# Crie uma função que receba as coordenadas de 2 pontos no plano cartesiano (x,y) e retorne a distância entre eles. 

# Crie um programa que lê as coordenadas, executa a função e imprime a distância.
  
import math
x1 = float( input().strip())
y1  = float( input().strip())
x2 = float( input().strip())
y2 =  float( input().strip())
distância = math.sqrt((x1-x2)**2+(y1-y2)**2)
print('%.6f' %(distância))
