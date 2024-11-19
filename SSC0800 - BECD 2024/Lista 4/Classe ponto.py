# Implemente uma classe chamada Ponto que deverá representar um ponto no plano cartesiano, com os seguintes atributos:
# x: A coordenada x do ponto.
# y: A coordenada y do ponto.

# A classe deverá conter o seguinte método:
# calculardistancia(outroponto): Método que recebe outro objeto do tipo Ponto e calcula a distância entre o ponto atual e o ponto recebido, usando a fórmula de calcular distância:

# Subtração das coordenadas:
# Subtraímos as coordenadas 𝑥2 e 𝑥1 para encontrar a diferença entre as coordenadas x: (𝑥2 - 𝑥1)
# Subtraímos as coordenadas y2 e y1 para encontrar a diferença entre as coordenadas y: (y2 - y1)

# Elevação ao quadrado:
# Eleve ao quadrado os resultados dessas subtrações para garantir que o valor seja positivo

# Soma dos quadrados:
# Some os resultados dos quadrados

# Raiz quadrada:
# Tire a raiz quadrada da soma para obter a distância final

# O programa deverá receber as coordenadas de dois pontos no plano cartesiano e calcular a distância entre eles.
# Formato de Entrada: 
# Quatro números inteiros, representando as coordenadas dos dois ponto (𝑥1 - y1) e (𝑥2 - y1) nesta ordem

# Formato de Saída: Exiba a distância entre os dois pontos no formato:
# Distância: [valor]

# Exemplo de Entrada
# 3
# 4
# 7
# 1

# Exemplo de Saída
# Distância: 5.0

class Ponto(object):
    def __init__(self, xa, ya, xb, yb):
        self.xa = xa
        self.ya = ya
        self.xb = xb
        self.yb = yb
    
    def calculardistancia(self):
        return ((self.xa - self.xb)**2 + (self.ya - self.yb)**2)**0.5
    
xa = float(input())
ya = float(input())
xb = float(input())
yb = float(input())
result = Ponto(xa, ya, xb, yb)
print(f'Distância: {result.calculardistancia()}')