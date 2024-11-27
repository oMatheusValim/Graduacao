# Complete as funções da Classe Restaurante e crie um programa que exiba um menu com as seguintes opções:
# - [1] Nova conta: cria uma nova conta a partir do número da mesa
# - [2] Adiciona item: adiciona um item na conta e o seu respectivo valor a partir do número da mesa
# - [3] Exibe itens: exibe os itens de uma conta e os seus respectivos valores a partir do número da mesa
# - [4] Exibe total: exibe o total da conta de uma mesa
# - [5] Encerra conta: encerra a conta de uma mesa
# - [6] Exibe contas encerradas: exibe o numero da mesa e o total pago de cada conta encerrada
# - [9] Sai

class Restaurante():
    def __init__(self, num_mesa):
        self._num_mesa = num_mesa
        self._itens = []
        self._valores = []

    def set_addItem(self, item, valor):
        self._itens.append(item)
        self._valores.append(valor)
        
    def get_itens(self):
        return self._itens
        
    def get_valores(self):   
        return self._valores
        
    def get_mesa(self):
        return self._num_mesa 

mesas = []
contas_encerradas = []

def add_mesa(num_mesa):
    nova_mesa = Restaurante(num_mesa)
    mesas.append(nova_mesa) 

def menu():
    global mesas, contas_encerradas
    
    while True:
        opcao = int(input())
        
        if opcao == 1:
            num_mesa = int(input())
            add_mesa(num_mesa)
            
        elif opcao == 2:
            num_mesa = int(input())
            item = input().strip()
            valor = float(input()) 
            for m in mesas:
                if m.get_mesa() == num_mesa:
                    m.set_addItem(item, valor)
                    break
                
        elif opcao == 3:
            num_mesa = int(input())
            for m in mesas:
                if m.get_mesa() == num_mesa:
                    print(f'{m.get_itens()}')
                    print(f'{m.get_valores()}')
                    break
                
        elif opcao == 4:
            num_mesa = int(input())
            for m in mesas:
                if m.get_mesa() == num_mesa:
                    print(f'{sum(m.get_valores()):.1f}')
                    break
                
        elif opcao == 5:
            num_mesa = int(input())
            for m in mesas:
                if m.get_mesa() == num_mesa:
                    total = sum(m.get_valores())
                    contas_encerradas.append((num_mesa, total))
                    mesas.remove(m)
                    break
            
        elif opcao == 6:
            for c in contas_encerradas:
                print(f'[{c[0]}]')
                print(f'[{c[1]}]')
                
        elif opcao == 9:
            break
menu()
