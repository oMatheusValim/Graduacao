# #Crie uma classe para implementar uma conta corrente. A classe deve possuir os seguintes atributos: número da conta, 
# # nome do correntista e saldo. 
# # Os métodos são os seguintes: alterarNome, fazDepósito, fazSaque, aplicaJuros, verSaldo, verNome.
# # Crie um construtor que cria uma conta com: número da conta, nome do correntista e saldo inicial.
# # Obs: O método aplicaJuros incrementa o saldo em 5%

# Crie um menu com as seguintes opções:
# [1] Criar conta (número da conta, nome e saldo inicial)
# [2] Faz depósito 
# [3] Faz saque
# [4] Aplica juros
# [5] Ver saldo
# [9] Sair

class Conta_Corrente:
    def __init__(self, nome, saldo):
        self._nome = nome
        self._saldo = saldo
        
    def set_alterarNome(self, novo_nome):
        self._nome = novo_nome 
        
    def set_fazDeposito(self, valor):
        self._saldo += valor
        
    def set_fazSaque(self, valor):
        if self._saldo - valor < 0:
                print('Saldo insuficiente')
        self._saldo -= valor
            
    def set_aplicaJuros(self, valor):
        self._saldo += self._saldo * valor
        
    def get_verSaldo(self):
        return self._saldo
        
    def get_verNome(self):
        return self._nome
    
    def salvar(self):
        pass
    
    def __repr__(self):
        return f'Nome: {self._nome}\nSaldo: {self._saldo:2f}'
    
def add_contas(nome, saldo):
    nova_conta = Conta_Corrente(nome, saldo)
    contas.append(nova_conta)

def encontrar_conta(num_conta):
    if 0 <= num_conta < len(contas):
        return contas[num_conta]
    return None

contas =[]
def menu():
    while True:
        opcao = int(input())
        
        if opcao == 1:
            nome = input().strip()
            saldo_inicial = float(input())
            add_contas(nome, saldo_inicial)
            
        elif opcao == 2:
            num_conta = int(input())
            conta = encontrar_conta(num_conta)
            if conta:
                valor = float(input())
                conta.set_fazDeposito(valor)
                    
        elif opcao == 3:
            num_conta = int(input())
            conta = encontrar_conta(num_conta)
            if conta:
                valor = float(input())
                conta.set_fazSaque(valor)
            
        elif opcao == 4:
            num_conta = int(input())
            conta = encontrar_conta(num_conta)
            if conta:
                valor = float(input())
                conta.set_aplicaJuros(valor)
                    
        elif opcao == 5:
            num_conta = int(input())
            conta = encontrar_conta(num_conta)
            if conta:
                print(conta.get_verSaldo())
        
        elif opcao == 9:
            break
menu()