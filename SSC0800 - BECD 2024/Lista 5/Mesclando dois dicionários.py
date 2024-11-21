# Dado dois dicionários, escreva uma função que mescle os dois dicionários em um único. Se houver chaves repetidas, os valores do segundo dicionário devem prevalecer. A função deve retornar o dicionário mesclado.

# Entrada
# {'a': 1, 'b': 2}; {'b': 3, 'c': 4}

# Saída
# {'a': 1, 'b': 3, 'c': 4}

def separar(entrada):
    separacao = entrada.split(';')
    dic1 = eval(separacao[0].strip())
    dic2 = eval(separacao[1].strip())
    return dic1, dic2

def mesclar(d1, d2):
    mesclagem = {**d1, **d2}
    return mesclagem
    
entrada = input()
dicionario1, dicionario2 = separar(entrada)
result = mesclar(dicionario1, dicionario2)
print(result)