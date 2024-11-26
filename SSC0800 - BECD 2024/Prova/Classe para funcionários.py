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

class Funcionarios:
    def __init__(self, nome, salario, departamento):
        self._nome = nome
        self._salario = salario
        self._departamento = departamento
    
    def get_nome(self): 
        return self._nome
    
    def get_salario(self):
        return self._salario
    
    def get_departamento(self):
        return self._departamento
    
    def set_departamento(self, novo_departamento):
        self._departamento = novo_departamento
        return self._departamento

    def set_salario(self, horas_trabalhadas):
        if horas_trabalhadas > 50:
            horas_extras = horas_trabalhadas - 50
            valor_horas_extras = horas_extras * (self._salario / 50)
            self._salario += valor_horas_extras
        return self._salario

    def __repr__(self):
        return f'{self._nome} {self._salario:.1f} {self._departamento}'
    

def add_funcionarios(nome, salario, departamento):
    novo_funcionario = Funcionarios(nome, salario, departamento)
    funcionarios.append(novo_funcionario)

def maior_salario():
    return max(funcionarios, key=lambda f: f.get_salario())
    
def media_salario():
    return sum(f.get_salario() for f in funcionarios) / len(funcionarios)

funcionarios = []
num_funcionarios = int(input())
while len(funcionarios) < num_funcionarios:
    entrada = input().split()
    nome, salario, departamento = entrada[0], float(entrada[1]), entrada[2]
    add_funcionarios(nome, salario, departamento)

opcao = int(input())

if opcao == 1:
    infos = input().split()
    nome1, horas_trabalhadas = infos[0], int(infos[1])
    for f in funcionarios:
        if f.get_nome() == nome1:
            f.set_salario(horas_trabalhadas)
            print(f)
            
elif opcao == 2:
    result = maior_salario()
    print(result)
    
elif opcao == 3:
    infos = input().split()
    nome3, novo_departamento = infos[0], infos[1]
    for f in funcionarios:
        if f.get_nome() == nome3:
            f.set_departamento(novo_departamento)
            print(f)
            
elif opcao == 4:
    result = media_salario()
    print(f'{result:.2f}')
