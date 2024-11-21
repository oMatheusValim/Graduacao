# Implemente uma função que receba uma lista de palavras e retorne um dicionário onde a chave é a palavra e o valor é o número de vezes que essa palavra aparece na lista.

# Entrada
# Java

# Saída
# {'J': 1, 'a': 2, 'v': 1}

def contar_caracteres(lista_palavras):
    dicionario = {}
    for palavra in lista_palavras:
        for char in palavra:  
            dicionario[char] = dicionario.get(char, 0) + 1
    return dicionario

entrada = input().strip()
result = contar_caracteres(entrada)
print(result)
