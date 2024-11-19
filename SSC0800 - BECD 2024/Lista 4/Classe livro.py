# Implemente uma classe chamada Livro com os seguintes atributos:
# titulo: O título do livro.
# autor: O nome do autor.
# paginas: O número de páginas do livro.

# A classe deverá conter os seguintes métodos:
# exibir_informacoes(): Método que exibe as informações do livro no seguinte formato: Título por Autor
# verificar_tamanho(): Método que verifica se o livro é longo ou curto. Um livro é considerado longo se tiver mais de 500 páginas, caso contrário será considerado curto.

# O programa deverá solicitar ao usuário as informações do livro (título, autor e número de páginas) e exibir:
# As informações do livro.
# A classificação do livro, se ele é longo ou curto.

# Formato de Entrada:
# O título do livro.
# O nome do autor.
# O número de páginas.

# Formato de Saída: 
# Título por Autor Exiba se o livro é longo ou curto no formato:
# Livro Longo ou Livro Curto

# Exemplo de Entrada
# Python 101
# Michael Driscoll
# 588

# Exemplo de Saída
# Python 101 por Michael Driscoll
# Livro Longo

class Livro(object):
    def __init__(self, titulo, autor, paginas):
        self.titulo = titulo
        self.autor = autor
        self.paginas = paginas
    
    def exibir_informacoes(self):
        return (
            f"{self.titulo} por {self.autor}"
        )
    
    def verificar_tamanho(self):
        if self.paginas > 500:
            return 'Livro Longo'
        else:
            return 'Livro Curto'
        
titulo = input().strip()
autor = input()
paginas = int(input())
result = Livro(titulo, autor, paginas)
print(f'{result.exibir_informacoes()}\n{result.verificar_tamanho()}')