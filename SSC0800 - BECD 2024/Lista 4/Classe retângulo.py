# Este exercício solicita a criação de uma classe Retangulo, que deve ter dois atributos: largura e altura. A classe deve incluir métodos para calcular a área e o perímetro do retângulo. O usuário fornecerá os valores de largura e altura, e o programa calculará e exibirá a área e o perímetro.

# Entrada Largura e Altura
# 3
# 5

# Saída
# Área: 15.0
# Perímetro: 16.0

class Retangulo(object):
    def __init__(self, largura, altura):
        self.largura = largura
        self.altura = altura
    
    def area(self):
        return self.largura * self.altura
    
    def perimetro(self):
        return (2 * self.largura) + (2 * self.altura)
        
        
entrada_largura = float(input())
entrada_altura = float(input())
result = Retangulo(entrada_largura, entrada_altura)
print("Área:", float(result.area()))
print("Perímetro:", float(result.perimetro()))

# FEITO