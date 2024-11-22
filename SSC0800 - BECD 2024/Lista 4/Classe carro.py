# Implemente uma classe chamada Carro com os seguintes atributos:
# marca: A marca do carro.
# modelo: O modelo do carro.
# ano: O ano de fabricação do carro.

# A classe deverá incluir um método que calcule a idade do carro com base no ano atual (considerar o ano atual como 2024). O programa deverá solicitar ao usuário as informações do carro (marca, modelo, ano) e, ao final, exibir as informações do carro e a idade em anos.

# Formato de Entrada:
# Marca do carro.
# Modelo do carro.
# Ano de fabricação do carro.

# Formato de Saída: A marca e o modelo do carro, seguidos pela idade do carro no seguinte formato: Marca Modelo, X anos de uso

# Exemplo de Entrada
# Toyota
# Corolla
# 2015

# Exemplo de Saída
# Toyota Corolla, 9 anos de uso

class Carro(object):
    def __init__(self, marca, modelo, ano):
        self.marca = marca
        self.modelo = modelo
        self.ano = ano
        
    def calcular_idade(self):
        return 2024 - self.ano
        
    def exibir_detalhes(self):
        return (
            f'{self.marca} {self.modelo}, {self.calcular_idade()} anos de uso'
        )
        
marca = input().strip()
modelo = input().strip()
ano = int(input())
result = Carro(marca, modelo, ano)
print(result.exibir_detalhes())