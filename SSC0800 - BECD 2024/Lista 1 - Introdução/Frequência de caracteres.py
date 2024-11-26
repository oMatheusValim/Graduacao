# Desenvolva um código em Python que leia uma string e conte a frequência de cada caractere na string. A saída deve ser uma lista dos caracteres e suas contagens, em qualquer ordem.

# ENTRADA
# A entrada será uma única string:
# abracadabra

# SAÍDA
# A saída será uma lista de bigramas e suas contagens, em qualquer ordem:
# a: 5
# b: 2
# r: 2
# c: 1
# d: 1

def contar_frequencia(caracteres):
    frequencia = {}
    
    for letras in caracteres:
        if letras in frequencia:
            frequencia[letras] += 1
        else:
            frequencia[letras] = 1
    return frequencia
entrada = input().strip()
resultado = contar_frequencia(entrada)
for letras, contagem in resultado.items():
    print(f"{letras}: {contagem}")
