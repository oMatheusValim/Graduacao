# Crie uma classe chamada Temperatura, que representará uma temperatura em graus Celsius com o atributo celsius. 
# Sua classe deverá conter os seguintes métodos:

# converter_fahrenheit(): Método que converte a temperatura para Fahrenheit usando a fórmula: [ fahrenheit = celsius * 9/5 + 32 ]
# converter_kelvin(): Método que converte a temperatura para Kelvin usando a fórmula: [ kelvin = celsius + 273.15 ]

# O programa deve receber a temperatura em Celsius como entrada e calcular:
# A temperatura em Fahrenheit.
# A temperatura em Kelvin.

# Se a temperatura em Celsius for menor que o zero absoluto (-273.15°C), exiba a mensagem: "A temperatura não pode ser menor que o zero absoluto."

# Caso a temperatura seja válida (não menor que -273.15°C):
# Temperatura em Fahrenheit: valor com uma casa decimal.
# Temperatura em Kelvin: valor com uma casa decimal.

# Exemplo de Entrada
# 25

# Exemplo de Saída
# Fahrenheit: 77.0
# Kelvin: 298.2

class temperatura(object):
    def __init__(self, celsius):
        self.celsius = celsius
        
    def converter_fahrenheit(self):
        fahrenheit = self.celsius * 9/5 + 32
        return fahrenheit
    
    def converter_kelvin(self):
        kelvin = self.celsius + 273.15
        return kelvin    
    
celsius = float(input())
if celsius < -273.15:
    print("A temperatura não pode ser menor que o zero absoluto.")
else:
    result = temperatura(celsius)
    print(f'Fahrenheit: {result.converter_fahrenheit():.1f}\nKelvin: {result.converter_kelvin():.1f}')