# Implemente uma função que receba uma lista de tuplas, onde cada tupla contém pares chave-valor, e converta essa lista em um dicionário. O objetivo é transformar uma estrutura de lista em um dicionário.

# Entrada
# 2
# nome
# João
# idade
# 20
# O programa solicita ao usuário quantos pares de chave-valor ele deseja inserir. Em seguida, o usuário insere cada chave e cada valor, que são adicionados como uma tupla à lista.

# Saída
# {'nome': 'João', 'idade': '20'}
# O programa exibe o dicionário resultante da conversão da lista de tuplas.

entradas = int(input())
dicionario = {}
for _ in range(entradas):
    chave = input().strip()
    valor = input().strip()
    dicionario[chave] = valor
print(dicionario)
