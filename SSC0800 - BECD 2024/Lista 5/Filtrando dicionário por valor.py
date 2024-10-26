# Escreva uma função que receba um dicionário e um valor limite, e retorne um novo dicionário contendo apenas os pares chave-valor cujos valores são maiores que o limite especificado.

# Entrada
# 3
# a
# 10
# b
# 5
# c
# 15
# 8
# O usuário insere quantos pares deseja adicionar ao dicionário. Para cada par, insere-se uma chave e um valor. O valor deve ser validado como um número inteiro. Após a criação do dicionário, o usuário insere o limite, e a função filtra as entradas com valores acima desse limite.

# Saída
# {'a': 10, 'c': 15}
# O dicionário filtrado é impresso com apenas os pares que possuem valores maiores que o limite especificado.

def filtragem(dic, lim):
    return {k: v for k, v in dic.items() if v > lim}
entradas = int(input().strip())
dicionario = {}
for i in range(entradas):
    chave = input().strip()
    valor = int(input().strip())
    dicionario[chave] = valor
limite = int(input())
dic_filtrado = filtragem(dicionario, limite)
print(dic_filtrado)
    
# FEITO