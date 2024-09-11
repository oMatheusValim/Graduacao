# Desenvolva um programa em Python que verifique se uma palavra ou frase (ignorando espaços e pontuações) é um palíndromo. Um palíndromo é uma sequência que pode ser lida da mesma forma de trás para frente. O código deve retornar "É palíndromo" se a palavra ou frase for um palíndromo e "Não é palíndromo" caso contrário. O programa deve tratar erros de entrada, como strings vazias.

# Entrada
# A grama é amarga

# Saída
# É palíndromo

# Entrada
# Olá

# Saída
# Não é palíndromo

# Entrada


# Saída
# Erro: entrada inválida, por favor insira uma palavra ou frase

import unicodedata
entrada = input().strip()
if entrada == "":
    print("Erro: entrada inválida, por favor insira uma palavra ou frase")
else:
    entrada = entrada.lower()
    entrada = unicodedata.normalize('NFD', entrada).encode('ascii', 'ignore').decode('utf-8')
    entrada = entrada.replace(" ", "")
    if entrada == entrada[::-1]:
        print("É palíndromo")
    else:
        print("Não é palíndromo")

# FEITO