# Crie uma classe Funcionário em Python com nome, salario e departamento, utilizando métodos get e set para obter e ajustar os dados.
# Use o método set_departamento para alterar o departamento de um funcionário.
# Use o método setsalario para ajustar o salario de um funcionário. Nesse caso, o argumeto do método será o horastrabalhadas. Se o número de horas trabalhadas for superior a 50, o método computa horas extras e soma ao salário. As horas extras são calculadas como segue:
# horas extras = horas_trabalhadas - 50
# Valor de horas extras = (horas extras * (salário / 50))

# Crie uma lista com objetos do tipo funcionario e crie funçoes que permitam executar as seguintes opções fornecidas pelo usuário:
# 1. Recebe o nome e horas trabalhadas, retornando os dados do funcionário com o salário ajustado.
# 2. Retorna o funcionário com maior salário
# 3. Recebe o nome e novo departamento do funcionário, retornando os dados atualizados.
# 4. Retorna a média salarial da lista de funcionários

# Entrada
# 8
# Ana 14500  TI
# Joao 10000 Venda
# Marcelo 8500 RH
# Silvia 12500 PRODUCAO
# Roberta 7500 Venda
# Pedro 6000 RH
# Maria 18500 Diretoria
# Carlos 16500 Diretornia
# 1 
# Ana 65

# Saída
# Ana 18850.0 TI

# Entrada
# 8
# Ana 14500  TI
# Joao 10000 Venda
# Marcelo 8500 RH
# Silvia 12500 PRODUCAO
# Roberta 7500 Venda
# Pedro 6000 RH
# Maria 18500 Diretoria
# Carlos 16500 Diretornia
# 2

# Saída
# Maria 18500.0 Diretoria

# Entrada
# 8
# Ana 14500  TI
# Joao 10000 Venda
# Marcelo 8500 RH
# Silvia 12500 PRODUCAO
# Roberta 7500 Venda
# Pedro 6000 RH
# Maria 18500 Diretoria
# Carlos 16500 Diretornia
# 3
# Joao RH

# Saída
# Joao 10000.0 RH

class Funcionario(object):
    def __init__(self, nome, salario, departamento):
        self._nome = nome
        self._salario = salario
        self._departamento = departamento
        
    def set_departamento(self, novo_departamento):
        self._departamento = novo_departamento
        
    def setsalario(self, horas_trabalhadas):
        if horas_trabalhadas > 50:
            horas_extras = horas_trabalhadas - 50
            valor_horas_extras = horas_extras * self._salario/50
            self.salario += valor_horas_extras 
            return self.salario
        
funcionarios = []
def add_funcionario(nome, salario, departamento):
    novo_funcionario = funcionarios(nome, salario, departamento)
    funcionarios.append(novo_funcionario)
    
def menu():
    while True:       
        num_funcionarios = int(input())
        while len(funcionarios) < num_funcionarios:
            entrada = input().split()
            nome = entrada[0]
            salario = int(entrada[1])
            departamento = entrada[2]
            add_funcionario(nome, salario, departamento)

        ato = int(input())
        
        if ato == 1:
            entrada = input().strip()
            horas_trabalhadas = int(entrada [1])
            for i in funcionarios:
                funcionarios.setsalario(horas_trabalhadas)
            
        elif ato == 2:
            result = maior_salario()
            
        elif ato == 3:
            entrada = input().strip()
            novo_departamento = entrada[1]
            for entrada[0] in funcionarios:
                funcionarios.set_departamento(novo_departamento)
            
        elif ato == 4:
            result = media_salario()       

        else:
            break
menu()
