# Desenvolva um código em Python que leia uma string e conte a frequência de bigramas (pares de palavras consecutivas) na string. A saída deve ser uma lista dos bigramas e suas contagens, em qualquer ordem.

# Entrada
# A entrada será uma única string:
# python é ótimo e python é versátil

# Saída
# A saída será uma lista de bigramas e suas contagens, em qualquer ordem:
# # python é: 2
# é ótimo: 1
# ótimo e: 1
# e python: 1
# é versátil: 1

from collections import Counter
frase = input().strip().lower()
frase2 = frase.split(" ")
bigramas = [(frase2[i], frase2 [i+1]) for i in range(len(frase2) - 1)]
numerobig = Counter (bigramas)
for bigrama, contagem in numerobig.items():
    print(f'{bigrama[0]} {bigrama[1]}: {contagem}')
