# Crie uma classe chamada Funcionario, que representará um funcionário com os seguintes atributos:
# nome
# salario_base
# percentual_bonus
# dias_trabalhados
# meta_vendas

# Sua classe deverá conter os seguintes métodos:
# calcular_bonus(): Método que calcula o valor do bônus com base no percentual de bônus e na meta de vendas. A fórmula é:
# bonus = salariobase * (percentualbonus / 100) + (meta_vendas / 100)

# calcular_salario_com_bonus()
# Método que retorna o salário total do funcionário, incluindo o bônus proporcional aos dias trabalhados no mês (assuma que o mês tem 30 dias). A fórmula é:
# salariototal = salariobase + (bonus * (dias_trabalhados / 30))

# exibir_detalhes()
# Método que exibe os detalhes do funcionário no formato:
# Funcionário: , Salário Base: R$ , Bônus Proporcional: R$ , Salário Total: R$ , Meta de Vendas: R$ .

# O programa deve receber os seguintes dados:
# O nome do funcionário.
# O salário base.
# O percentual de bônus.
# Os dias efetivamente trabalhados pelo funcionário no mês.
# A meta de vendas atingida no mês.

# O programa deverá calcular:
# O valor do bônus proporcional aos dias trabalhados.
# O salário total com o bônus proporcional.
# Os detalhes formatados como especificado.

# Validações
# Se o salário, o percentual de bônus ou os dias trabalhados forem negativos, exiba a mensagem:
# "Os valores de salário, percentual de bônus e dias trabalhados devem ser positivos."
# O número de dias trabalhados deve ser menor ou igual a 30. Caso contrário, exiba a mensagem:
# "O número de dias trabalhados não pode exceder 30 dias no mês."

# Exemplo de Entrada
# João
# 3000
# 15
# 30
# 8000

# Exemplo de Saída
# Funcionário: João
# Salário Base: R$ 3000.00 | Bônus Proporcional: R$ 1250.00 | Salário Total: R$ 5500.00 | Meta de Vendas: R$ 8000.00

class Funcionario(object):
    def __init__(self, nome, salario_base, percentual_bonus, dias_trabalhados, meta_vendas):
        self.nome = nome
        self.salario_base = salario_base
        self.percentual_bonus = percentual_bonus
        self.dias_trabalhados = dias_trabalhados
        self.meta_vendas = meta_vendas
        
    def calcular_bonus(self):
        return self.salario_base * (self.percentual_bonus / 100) + (self.meta_vendas / 100)
    
    def calcular_salario_com_bonus(self):
        return self.salario_base + (self.percentual_bonus * (self.dias_trabalhados / 30))
    
    def exibir_detalhes(self):
        return f'Funcionário: {self.nome}\nSalário Base: R$ {self.salario_base:.2f} | Bônus Proporcional: R$ {self.calcular_bonus():.2f} | Salário Total: R$ {self.calcular_salario_com_bonus():.2f} | Meta de Vendas: R$ {self.meta_vendas:.2f}'
    
nome = input().strip()
salario_base = float(input())
percentual_bonus = float(input())
dias_trabalhados = float(input())
meta_vendas = float(input())
if salario_base < 0 or percentual_bonus < 0 or dias_trabalhados < 0:
    print('Os valores de salário, percentual de bônus e dias trabalhados devem ser positivos.')
elif dias_trabalhados > 30:
    print("O número de dias trabalhados não pode exceder 30 dias no mês.")
else: 
    result = Funcionario(nome, salario_base, percentual_bonus, dias_trabalhados, meta_vendas)
    print(result.exibir_detalhes())