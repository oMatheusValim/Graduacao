# Implemente uma classe chamada Triangulo com os seguintes atributos:
# lado1: Comprimento do primeiro lado.
# lado2: Comprimento do segundo lado.
# lado3: Comprimento do terceiro lado.

# A classe deverá conter os seguintes métodos:
# verificar_validez(): Verifica se os três lados formam um triângulo válido, ou seja, se a soma de dois lados é sempre maior que o terceiro.
# calcular_perimetro(): Retorna o perímetro do triângulo, que é a soma dos três lados.
# calcular_area(): Calcula e retorna a área do triângulo usando a fórmula simplificada abaixo.

# Cálculo da área:
# Primeiro, calcule o semi-perímetro 𝑠, que é a soma dos três lados dividida por 2: 𝑠 =(𝑙𝑎𝑑𝑜1 + 𝑙𝑎𝑑𝑜2+ 𝑙𝑎𝑑𝑜3)/2
# ​Em seguida, a área do triângulo é calculada da seguinte forma: 𝐴 =(𝑠⋅(𝑠−𝑙𝑎𝑑𝑜1)⋅(𝑠−𝑙𝑎𝑑𝑜2)⋅(𝑠−𝑙𝑎𝑑𝑜3))^0.5
# O uso do ^0.5 representa a raiz quadrada de toda a expressão.

# O programa deverá receber os valores dos três lados do triângulo e, se os lados formarem um triângulo válido, deverá exibir:
# Que o triângulo é válido.
# O perímetro do triângulo.
# A área do triângulo.

# Se os lados não formarem um triângulo válido, o programa deverá exibir uma mensagem indicando que o triângulo é inválido.

# Formato de Entrada:
# Três números representando os lados do triângulo.

# Formato de Saída:
# Se o triângulo for válido, exiba:
# Triângulo válido Perímetro: [valor] Área: [valor]

# Caso contrário, exiba:
# Triângulo inválido

# Exemplo de Entrada
# 3
# 4
# 5

# Exemplo de Saída
# Triângulo válido
# Perímetro: 12.0
# Área: 6.0

class Triangulo(object):
    def __init__(self, lado1, lado2, lado3):
        self.lado1 = lado1
        self.lado2 = lado2
        self.lado3 = lado3
        
    def verificar_validez(self):
        if self.lado1 + self.lado2 > self.lado3 and self.lado1 + self.lado3 > self.lado2 and self.lado3 + self.lado2 > self.lado1:
            return True
        else: 
            return False
        
    def calcular_perimetro(self):
        return self.lado1 + self.lado2 + self.lado3
    
    def calcular_area(self):
        semi_perimetro = self.calcular_perimetro() / 2
        return (semi_perimetro * (semi_perimetro - self.lado1) * (semi_perimetro - self.lado2) * (semi_perimetro - self.lado3)) ** 0.5 
    
        
lado1 = float(input())
lado2 = float(input())
lado3 = float(input())
result = Triangulo(lado1, lado2, lado3)
if  result.verificar_validez() is True:
    print(f'Triângulo válido\nPerímetro: {result.calcular_perimetro():.1f}\nÁrea: {result.calcular_area()}')
else:
    print('Triângulo inválido')