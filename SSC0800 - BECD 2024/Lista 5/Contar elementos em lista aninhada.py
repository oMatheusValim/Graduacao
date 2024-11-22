# Dada uma lista que contém outras listas dentro dela, escreva uma função que conte o número total de elementos (incluindo os das listas internas). A função deve retornar o total de elementos.

# Entrada
# [1, [2, 3], [4, [5, 6]]]

# Saída
# 6

import ast

def contar_elementos(lista):
    total = 0
    for item in lista:
        if isinstance(item, list):  # Verifica se é uma sublista
            total += contar_elementos(item)  # Conta recursivamente
        else:
            total += 1  # Conta elemento simples
    return total

# Teste com a entrada fornecida
entrada = input()
entrada = ast.literal_eval(entrada)
print(contar_elementos(entrada))  # Saída esperada: 4



