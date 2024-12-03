#Crie uma classe JogoDaVelha. A classe deve ter os seguintes métodos:
# - exibeTabuleiro() – mostra o tabuleiro
# - jogaPlayer1(x, y) – registra a jogada do jogador 1
# - jogaPlayer2(x, y) – registra a jogada do jogador 2
# - verificaVitoria() – verifica se alguém venceu o jogo ou se o jogo empatou.

# Crie um programa que usa a classe JogoDaVelha para que duas pessoas joguem.
# Obs: Sugestão para estrutura de dados do tabuleiro:
# tab = [['', '', ''], ['', '', ''], ['', '', '']]

class JogoDaVelha:
    def __init__(self):
        self.tabuleiro = [['' for _ in range(3)] for _ in range(3)]
        self.jogador_atual = 1
            
    def exibeTabuleiro(self):
        for linha in self.tabuleiro:
            print(linha)
        print()
             
    def jogaPlayer1(self, x, y):
        if self.tabuleiro[x][y] == '':
            self.tabuleiro[x][y] = 'X' 
            return True
        return False
    
    def jogaPlayer2(self, x, y):
        if self.tabuleiro[x][y] == '':
            self.tabuleiro[x][y] = 'O'  
            return True
        return False
    
    def verificaVitoria(self):
        for linha in self.tabuleiro:
            if linha[0] == linha[1] == linha[2] != '':
                return f'O jogador {"1" if linha[0] == "X" else "2"} venceu!'
            
        for col in range(3):
            if self.tabuleiro[0][col] == self.tabuleiro[1][col] == self.tabuleiro[2][col] != '':
                return f'O jogador {"1" if self.tabuleiro[0][col] == "X" else "2"} venceu!'

        if self.tabuleiro[0][0] == self.tabuleiro[1][1] == self.tabuleiro[2][2] != '':
            return f'O jogador {"1" if self.tabuleiro[0][0] == "X" else "2"} venceu!'
        if self.tabuleiro[0][2] == self.tabuleiro[1][1] == self.tabuleiro[2][0] != '':
            return f'O jogador {"1" if self.tabuleiro[0][2] == "X" else "2"} venceu!'

        for linha in self.tabuleiro:
            if '' in linha:
                return None 
            
        return 'Empate!'
    
def main():
    jogo = JogoDaVelha()
    jogo.exibeTabuleiro()
    
    while True:
        if jogo.jogador_atual == 1:
            print('Jogador 1 (X), sua vez')
        else:
            print('Jogador 2 (O), sua vez')
            
        try: 
            x = int(input("Linha (0-2): "))
            y = int(input("Coluna (0-2): "))
            
            if not (0 <= x < 3 and 0 <= y < 3):
                print("Posição inválida! Apenas valores entre 0 e 2.")
                continue 
            
            if jogo.jogador_atual == 1:
                if jogo.jogaPlayer1(x, y):
                    jogo.jogador_atual = 2
                else:
                    print("Posição já ocupada. Tente novamente.")
            else:
                if jogo.jogaPlayer2(x, y):
                    jogo.jogador_atual = 1
                else:
                    print("Posição já ocupada. Tente novamente.")

            jogo.exibeTabuleiro()
            resultado = jogo.verificaVitoria()
            
            if resultado:
                print(resultado)
                break

        except ValueError:
            print("Entrada inválida! Apenasa números inteiros.")

main()
