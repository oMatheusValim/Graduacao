# Implemente uma classe chamada Circulo com o seguinte atributo:
# raio: O raio do círculo.

# A classe deve conter os seguintes métodos:
# calcular_area(): Método que retorna a área do círculo usando a fórmula A = π * raio², onde π pode ser obtido da biblioteca matemática de Python (math.pi).
# calcular_perimetro(): Método que retorna o perímetro do círculo usando a fórmula P = 2 * π * raio.

# O programa deverá solicitar ao usuário o valor do raio e calcular, em seguida, a área e o perímetro do círculo.

# Formato de Entrada:
# Um único número representando o raio do círculo. 
# 
# Formato de Saída:
# Exibir a área e o perímetro do círculo, ambos com a máxima precisão possível.
# 
# Exemplo de Entrada
# 3
# 
# Exemplo de Saída
# Área: 28.274333882308138
# Perímetro: 18.84955592153876

import math

class Circulo(object):
    def __init__(self, raio):
        self.raio = raio
        
    def calcular_area(self):
        return  math.pi  * self.raio ** 2
    
    def calcular_perimetro(self):
        return 2 * math.pi * self.raio
        
raio = float(input())
result = Circulo(raio)
print(f'Área: {result.calcular_area()}\nPerímetro: {result.calcular_perimetro()}')