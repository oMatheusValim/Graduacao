# Dados n pontos em [−1, 1]×[0, 2], faça um programa em Python que ordene angularmente esses pontos. 
# Dica: use o comando sort

'''
estabeleço um numero de pontos que serão criados (n)
gerar matrizes de n colunas e 2 colunas (coordenada do ponto)

'''

import numpy as np
import matplotlib.pyplot as plt

def pseudo_angle():
    return 2


num_pontos = int(input())
pontos = 2*np.random.rand(num_pontos, 2) - np.array([1,0])


plt.title("Ordenação angular de n pontos")
plt.ylabel("Eixo Y")
plt.xlabel("Eixo X")
plt.scatter(pontos[:,0], pontos[:,1], color='green') 
plt.grid(True)
plt.show()

# INCOMPLETO