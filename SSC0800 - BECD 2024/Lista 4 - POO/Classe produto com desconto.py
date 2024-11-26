# Crie uma classe chamada Produto, que representará um produto com os atributos nome, preco_original e desconto. 
# Sua classe deverá conter os seguintes métodos:

# calcularprecocom_desconto(): Método que retorna o preço final do produto após aplicar o desconto. A fórmula é: [ preco_final = preco_original * (1 - desconto / 100) ]
# exibir_detalhes(): Método que exibe os detalhes do produto no formato: "Produto: <nome>, Preço Original: R$ <preco_original>, Preço com Desconto: R$ <preco_final>".

# O programa deve receber o nome do produto, o preço original e o desconto como entrada e calcular:
# O preço final após o desconto.
# Os detalhes do produto formatados como especificado.

# Se o preço original ou o desconto forem negativos, exiba a mensagem: "O preço original e o desconto devem ser números positivos."

# Caso os valores sejam válidos:
# Exiba o nome do produto, o preço original e o preço final formatados com duas casas decimais.

# Exemplo de Entrada
# Notebook
# 3000
# 10

# Exemplo de Saída
# Produto: Notebook, Preço Original: R$ 3000.00, Preço com Desconto: R$ 2700.00

class Produto(object):
    def __init__(self, nome, preco_original, desconto):
        self.nome = nome 
        self.preco_original = preco_original 
        self.desconto = desconto
        
    def calcularprecocom_desconto(self):
        return self.preco_original * (1 - self.desconto / 100) 
    
    def exibir_detalhes(self):
        return (
            f"Produto: {self.nome}, " + f"Preço Original: R$ {self.preco_original:.2f}, " f"Preço com Desconto: R$ {self.calcularprecocom_desconto():.2f}"
        )

nome = input().strip()
preco_original = float(input())
desconto = float(input())
if preco_original < 0 or desconto < 0:
    print("O preço original e o desconto devem ser números positivos.")
else: 
    result = Produto(nome, preco_original, desconto)
    print(result.exibir_detalhes())