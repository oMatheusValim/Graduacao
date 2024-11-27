# Crie uma classe chamada Produto, que representará um produto de uma loja com os seguintes atributos:
# nome: nome do produto.
# preco_unitario: preço unitário do produto.
# quantidade_estoque: quantidade do produto em estoque.
# quantidade_vendida: quantidade do produto vendida no mês.
# percentual_desconto: percentual de desconto aplicado sobre o preço unitário para vendas.

# A classe deve conter os seguintes métodos:
# - calcularvalordesconto(): Método que calcula o valor do desconto por unidade do produto com base no percentual de desconto.
# A fórmula é: valor_desconto = preco_unitario * (percentual_desconto / 100)
# - calcularreceitamensal(): Método que retorna a receita total do mês considerando as vendas realizadas com desconto.
# A fórmula é: receita = (preco_unitario - valor_desconto) * quantidade_vendida
# - exibir_detalhes(): Método que exibe os detalhes do produto no formato:
# Produto: [Nome] | Preço Unitário: R$ [valor] | Estoque: [quantidade] unidades | Vendas no Mês: [quantidade_vendida] | Receita Mensal: R$ [valor]

# O programa deve receber os seguintes dados:
# Nome do produto.
# Preço unitário.
# Quantidade em estoque.
# Quantidade vendida no mês.
# Percentual de desconto.

# O programa deverá calcular:
# O valor do desconto por unidade.
# A receita total gerada pelas vendas do mês com desconto.
# Os detalhes do produto formatados conforme especificado.

# Validações:
# - Se o preço unitário, percentual de desconto ou quantidade em estoque forem negativos, exiba a mensagem:
# "Os valores de preço unitário, percentual de desconto e quantidade em estoque devem ser positivos."
# - Se a quantidade vendida for maior que a quantidade em estoque, exiba a mensagem:
# "A quantidade vendida não pode ser maior que o estoque disponível."

# Exemplo de Entrada
# Notebook
# 3500.00
# 20
# 5
# 10

# Exemplo de Saída
# Produto: Notebook
# Preço Unitário: R$ 3500.00 | Estoque: 20 unidades | Vendas no Mês: 5 | Receita Mensal: R$ 15750.00

#Para evitar problemas com o run.codes, utilize o formato abaixo para saída dos dados
# f"Produto: {self.nome}" f"Preço Unitário: R$ {self.preco_unitario:.2f} | Estoque: {self.quantidade_estoque} unidades | Vendas no Mês: {self.quantidade_vendida} | Receita Mensal: R$ {receita_mensal:.2f}"

class Produto:
    def __init__(self, nome, preco_unitario, quantidade_estoque, quantidade_vendida, percentual_desconto):
        self.nome = nome
        self.preco_unitario = preco_unitario
        self.quantidade_estoque = quantidade_estoque
        self.quantidade_vendida = quantidade_vendida
        self.percentual_desconto = percentual_desconto
        
    def calcular_valorDesconto(self):
        return self.preco_unitario * (self.percentual_desconto / 100)
    
    def calcular_receitaMensal(self):
        return (self.preco_unitario - self.calcular_valorDesconto()) * self.quantidade_vendida
    
    def exibir_detalhes(self):
        return f'Produto: {self.nome}\nPreço Unitário: R$ {self.preco_unitario:.2f} | Estoque: {self.quantidade_estoque} unidades | Vendas no Mês: {self.quantidade_vendida} | Receita Mensal: R$ {self.calcular_receitaMensal():.2f}'
    
nome = input().strip()
preco_unitario = float(input())
quantidade_estoque = int(input())
quantidade_vendida = int(input())
percentual_desconto = float(input())

if  preco_unitario < 0 or percentual_desconto < 0 or quantidade_estoque < 0:
    print("Os valores de preço unitário, percentual de desconto e quantidade em estoque devem ser positivos.")
elif quantidade_vendida > quantidade_estoque:
    print("A quantidade vendida não pode ser maior que o estoque disponível.")
else:
    result = Produto(nome, preco_unitario, quantidade_estoque, quantidade_vendida, percentual_desconto)
    print(result.exibir_detalhes())