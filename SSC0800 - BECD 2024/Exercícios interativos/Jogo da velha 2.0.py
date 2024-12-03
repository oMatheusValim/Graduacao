#Altere a classe do exercício do Jogo da velha, substituindo os métodos jogaPlayer1(x, y) e jogaPlayer2(x, y) pelo método fazJogada(x,y).
# O método fazJogada imprime uma mensagem dizendo qual jogador deve jogar (começando pelo jogador 1), e recebe as 
# coordenadas da jogada.
# Se a jogada for válida, é a vez do próximo jogador. Caso contrário, é exibida uma mensagem de erro e são solicitadas coordenadas válidas

class JogoDaVelha:
    def __init__(self):
        self.tabuleiro = [['' for _ in range(3)] for _ in range(3)]
        self.jogador_atual = 1
            
    def exibeTabuleiro(self):
        for linha in self.tabuleiro:
            print(linha)
        print()
    
    def fazJogada(self, x, y):
        if not (0 <= x < 3 and 0 <= y < 3):
            print("Posição inválida! Digite valores entre 0 e 2.")
            return False

        if self.tabuleiro[x][y] != '':
            print("Posição já ocupada! Tente novamente.")
            return False

        simbolo = 'X' if self.jogador_atual == 1 else 'o'
        self.tabuleiro[x][y] = simbolo
        return True
    
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
            
            if jogo.fazJogada(x, y):
                jogo.jogador_atual = 1 if jogo.jogador_atual == 2 else 2

            jogo.exibeTabuleiro()
            resultado = jogo.verificaVitoria()
            
            if resultado:
                print(resultado)
                break

        except ValueError:
            print("Entrada inválida! Apenasa números inteiros.")

main()
