# Neste exercício, você deve criar uma classe abstrata FormaGeometrica com o método abstrato calculararea. Em seguida, crie as subclasses Quadrado, Retângulo, e Circulo, que implementam o método calculararea de acordo com suas formas específicas. Para o Quadrado eu tenho de entrada: Valor de Lado, para o Retângulo eu tenho de entrada: Valor de Largura e Altura e para o Círculo temos de entrada: Valor do Raio. O usuário fornecerá as dimensões de cada forma geométrica, e o programa calculará e exibirá a área.

# Entrada (lado, largura/altura, raio).
# retângulo
# 3
# 4

# Saída
# A área do retângulo é: 12.0

from abc import ABC, abstractmethod
import math

class FormaGeometrica(ABC):
    @abstractmethod
    def calcularArea(self):
        pass 
    
class Quadrado(FormaGeometrica):
    def __init__(self, lado):
        self.lado = lado
    def calcularArea(self):
        return self.lado **2
            
class Retângulo(FormaGeometrica):
    def __init__(self, largura, altura):
        self.largura = largura
        self.altura = altura
    def calcularArea(self):
        return self.largura * self.altura
        
class Circulo(FormaGeometrica):
    def __init__(self, raio):
        self.raio = raio
    def calcularArea(self):
        return self.raio **2 * math.pi
    
def main():    
    forma = input().strip().lower()
    if forma == 'quadrado':
        lado = float(input())
        result = Quadrado(lado)
        print(f'A área do quadrado é: {result.calcularArea():.1f}')
        
    elif forma == 'retângulo' or forma == 'retangulo':
        largura = float(input())
        altura = float(input())
        result = Retângulo(largura, altura)
        print(f'A área do retângulo é: {result.calcularArea():.1f}')
        
    elif forma == 'círculo':
        raio = float(input())
        result = Circulo(raio)
        print(f'A área do círculo é: {result.calcularArea()}')

    else: 
        print('Forma geométrica não reconhecida.')
        
if __name__ == '__main__':
    main()