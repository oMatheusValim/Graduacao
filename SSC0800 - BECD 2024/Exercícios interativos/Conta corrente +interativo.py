#Crie uma classe para implementar uma conta corrente. A classe deve possuir os seguintes atributos: número da conta, 
# nome do correntista e saldo. 
# Os métodos são os seguintes: alterarNome, fazDepósito, fazSaque, aplicaJuros, verSaldo, verNome.
# Crie um construtor que cria uma conta com: número da conta, nome do correntista e saldo inicial.
# Obs: O método aplicaJuros incrementa o saldo em 5%

from InquirerPy import prompt

class Conta_Corrente:
    def __init__(self, num_conta, nome, saldo):
        self.num_conta = num_conta
        self.nome = nome
        self.saldo = saldo
        
    def alterarNome(self):
        novo_nome = input("Novo nome: ").strip()
        self.nome = novo_nome
        print(f'Nome alterado para {self.nome}')
        return self.nome
    
    def fazDepósito(self):
        deposito = float(input('Valor do depósito: '))
        self.saldo += deposito
        print(f'Depósito no valor de R$ {deposito:.2f} realizado com sucesso!')
        return self.saldo
    
    def fazSaque(self):
        saque = float(input('Digite o valor do saque: '))
        while self.saldo - saque < 0:
                print('Não é possível retirar um valor maior do que a quantia atual!\nDigite outro valor: ')
                saque = float(input())
        self.saldo -= saque
        print(f'Saque no valor de R$ {saque} realizado com sucesso!')
        return self.saldo
    
    def aplicaJuros(self):
        juros = round(self.saldo*0.05, 2 )
        self.saldo += juros
        print(f'Juros de R$ {juros} aplicado ao saldo!')
        return self.saldo
    
    def verSaldo(self):
        print(f'Seu saldo é de R$ {self.saldo:.2f}') 
        return self.saldo
        
    def verNome(self):
        print(f'Nome do correntista: {self.nome}')
        return self.nome
    
    def exibir_informacoes(self):
        print (
            f'Nome: {self.nome}\nNúmero da conta: {self.num_conta}\nSaldo: {self.saldo:.2f}'
        )

def menu(conta):
    while True:
        perguntas = prompt([{
            "type": 'list', 
            'name': 'ato',
            'message': 'O que deseja fazer?',
            'choices': ['Informações', 'Trocar o nome',  'Fazer depósito',  'Fazer saque',  'Aplicar juros',  'Ver o saldo', 'Ver o nome', 'Sair'],}])
        
        if perguntas['ato'] == "Informações":
            conta.exibir_informacoes()
        elif perguntas['ato'] == 'Trocar o nome':
            conta.alterarNome()   
        elif perguntas['ato'] == 'Fazer depósito':
            conta.fazDepósito()
        elif perguntas['ato'] == 'Fazer saque':
            conta.fazSaque()
        elif perguntas['ato'] == 'Aplicar juros':
            conta.aplicaJuros()
        elif perguntas['ato'] == 'Ver o saldo':
            conta.verSaldo()
        elif perguntas['ato'] == 'Ver o nome':
            conta.verNome()
        elif perguntas['ato'] == 'Sair':
            print('Encerrando...')
            break
        
if __name__ == '__main__':  
    num_conta = input('Digite o número da conta: \n').strip()   
    nome = input('Digite o nome do correntista: \n').strip()
    saldo = float(input('Digite o saldo inicial: \n'))
    
    conta = Conta_Corrente(num_conta=num_conta, nome=nome, saldo=saldo)
    menu(conta)