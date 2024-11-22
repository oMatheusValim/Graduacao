# Crie uma classe chamada Cubo, que representará um cubo com o atributo aresta. 
# Sua classe deverá conter os seguintes métodos:

# calcular_volume(): Método que retorna o volume do cubo.
# calcular_areasuperficie(): Método que retorna a área da superfície do cubo.
# Se a medida da aresta for negativa, exiba a mensagem: "A aresta deve ser um número positivo."

# O programa deve receber a medida da aresta do cubo como entrada e calcular:

# O volume: ( aresta^3 ).
# A área da superfície: ( 6 * aresta^2 ).
# O resultado deve ser impresso no seguinte formato:

# Volume: valor do volume com uma casa decimal.
# Área da Superfície: valor da área com uma casa decimal.

# Exemplo de Entrada
# 3

# Exemplo de Saída
# Volume: 27.0
# Área da Superfície: 54.0  

class cubo(object):
    def __init__(self, aresta):
        self.arestas = aresta
    
    def calcular_volume(self):
        return self.arestas**3
    
    def calcular_areasuperficie(self):
        return 6*self.arestas**2

aresta = float(input()) 
if aresta < 0:
    print("A aresta deve ser um número positivo.")
else: 
    result = cubo(aresta)
    print(f'Volume: {result.calcular_volume():.1f}\nÁrea da Superfície: {result.calcular_areasuperficie():.1f}')
