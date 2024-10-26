# Crie uma lista com informações de 5 filmes. Cada filme deve ser armazenado como um dicionário com as seguintes informações: Título, Gênero, Ano de lançamento

#  Lab5.4b) Depois de criada a lista de filmes, exiba o título dos filmes de um determinado gênero (digitado pelo usuário). 

#  Lab 5.4c)  Depois de criada a lista de filmes, exiba o título dos filmes lançados em um determinado período (ano inicial e ano final), digitado pelo usuário.

#  Lab 5.4d) Depois de criada a lista de filmes, exiba o título dos filmes que contém uma palavra digitado pelo usuário.
#  Ex: Palavra: “Arca”
#  Título: “Caçadores da Arca Perdida"

lista_filmes = []

filme={'Título': "Sempre ao seu lado", 'Gênero': "drama", 'Ano de Lancamento': 2009}
lista_filmes.append(filme)

filme={'Título': "Até o Último Homem", 'Gênero': "drama", 'Ano de Lancamento': 2016}
lista_filmes.append(filme)

filme={'Título': "Rei leão", 'Gênero': "drama", 'Ano de Lancamento': 2008}
lista_filmes.append(filme)

filme={"Título": "Homem Aranha Miles Morales", "Gênero": "acao", "Ano de Lancamento": 2011}
lista_filmes.append(filme)

filme={"Título": "Gente Grande", "Gênero": "comedia", "Ano de Lancamento": 2010}
lista_filmes.append(filme)


def busca_genero(genero):
    for filme in lista_filmes:
        if filme["Gênero"].lower() == genero.lower():
            print(filme["Título"])
            
def periodo_tempo(ano_inicial, ano_final):
    for filme in lista_filmes:
        if ano_inicial <= filme["Ano de Lancamento"] <= ano_final:
            print(filme["Título"])
    
def palavra_titulo(palavra):
    for filme in lista_filmes:
        if palavra.lower() in filme["Título"].lower():
            print(filme["Título"])

possiveis_classificacao = ["palavra", "gênero", "período"]	
classificacao = input("Digite se quer buscar por palavra no título, gênero ou perído de lançamento: ").strip().lower()
if classificacao in possiveis_classificacao:
    if classificacao == "palavra":
        busca = input().strip()
        palavra_titulo(busca)
                
    elif classificacao == "gênero":
        busca = input().strip().lower()
        busca_genero(busca)
        
    else:
        busca = input("Digite o ano final e o final \nExemplo: 2000 2010 \n").split()
        ano_inicio = int(busca[0])
        ano_final = int(busca[1])
        periodo_tempo(ano_inicio, ano_final)
                
else:
    print("Opção inválida, escolha entre palavra gênero ou período")	