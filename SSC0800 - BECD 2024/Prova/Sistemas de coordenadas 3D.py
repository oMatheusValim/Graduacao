# Implemente uma classe chamada Ponto3D para representar um ponto no espaço tridimensional. 
 
# O programa deve: 
# 1) Ler as coordenadas de dois pontos no espaço 3D. Cada ponto será definido pelas coordenadas x, y e z. 
# 2) Calcular:
#     - A distância entre os dois pontos usando a fórmula da distância euclidiana em 3D 
#     - O ponto médio entre os dois pontos, cujas coordenadas são calculadas pela média aritmética de cada componente xmeio = (x1 + x2) / 2, ymeio = (y1 + y2) / 2, z_meio = (z1 + z2) / 2 

# A primeira entrada representa o primeiro ponto no espaço 3D . Ele será descrito pelas coordenadas x1, y1 e z1. 
# A segunda entrada representa o segundo ponto no espaço 3D . Ele será descrito pelas coordenadas x2, y2 e z2.

# ENTRADA:
#     1 4 5
#     7 6 5
    
# SAÍDA:
#     6.32
#     (4.0, 5.0, 5.0)
    
class Ponto3D:
    def __init__(self, x1, y1, z1, x2, y2, z2):
        self.x1 = x1
        self.y1 = y1
        self.z1 = z1
        self.x2 = x2
        self.y2 = y2
        self.z2 = z2
        
    def distancia(self):
        return ((self.x1-self.x2)**2 + (self.y1-self.y2)**2 + (self.z1-self.z2)**2 )**0.5
    
    def ponto_medio(self):
        return (self.x1 + self.x2) / 2, (self.y1 + self.y2) / 2, (self.z1 + self.z2) / 2
        
    def exibir(self):
        return (f'{self.distancia():.2f}\n{self.ponto_medio()}')
        
pontoA = input().split()
x1, y1, z1 = float(pontoA[0]), float(pontoA[1]), float(pontoA[2])
pontoB = input().split()
x2, y2, z2 = float(pontoB[0]), float(pontoB[1]), float(pontoB[2])

result = Ponto3D(x1, y1, z1, x2, y2, z2)
print(result.exibir())