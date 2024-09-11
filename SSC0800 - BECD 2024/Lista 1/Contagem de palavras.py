# Desenvolva um código em Python que leia uma string e conte o número de ocorrências de cada palavra na string.

# Entrada
# A entrada será uma única string:
# Este é um teste este é apenas um teste

# Saída
# A saída será uma lista de palavras e suas contagens, em qualquer ordem:
# este: 2
# é: 2
# um: 2
# teste: 2
# apenas: 1

entrada = input().split(" ")
frase = list(map(lambda x: x.lower(), entrada))
from collections import Counter
contagem_palavras = Counter(frase)
for frase, contagem in contagem_palavras.items():
    print(f'{frase}: {contagem}')
