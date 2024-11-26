# Escreva uma função que receba dois dicionários e uma função de combinação, e aplique essa função para combinar os valores das chaves presentes em ambos os dicionários. Se uma chave existir apenas em um dos dicionários, o valor dessa chave será adicionado ao dicionário resultante como está.

# Entrada
# 2 (quantos pares chave-valor deseja inserir no primeiro dicionário)
# a (chave)
# 10 (valor)
# b (chave)
# 5 (valor)
# 2 (quantos pares chave-valor deseja inserir no segundo dicionário)
# b (chave)
# 15 (valor)
# c (chave)
# 20 (valor)

# Primeiro informa quantos pares chave-valor deseja inserir no primeiro dicionário: 2 Depois digite a chave: a e digite o valor: 10 Depois digite a chave: b e digite o valor: 5

# Saída
# {'a': 10, 'b': 20, 'c': 20}

# A saída é um dicionário mesclado

# Entrada
# 1
# a
# 1
# 1
# b
# 2

# Saída
# {'a': 1, 'b': 2}

num_chave1 = int(input())
dicionario1 = {}
while len(dicionario1) < num_chave1:
    chave = input().strip()
    valor = int(input())
    dicionario1[chave] = valor
    
num_chave2 = int(input())
dicionario2 = {}
while len(dicionario2) < num_chave2:
    chave = input().strip()
    valor = int(input())
    dicionario2[chave] = valor

mesclagem = dicionario1.copy()
for chave, valor in dicionario2.items():
    if chave in mesclagem:
        mesclagem[chave] += valor
    else:
        mesclagem[chave] = valor

print(mesclagem)