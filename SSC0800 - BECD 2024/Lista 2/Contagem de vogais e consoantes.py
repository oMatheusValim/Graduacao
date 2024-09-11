# Desenvolva um programa em Python que conte o número de vogais e consoantes em uma string fornecida pelo usuário. O programa deve imprimir o número de vogais e consoantes presentes na string.
# A entrada consiste em uma única string.
# A saída deve ser: O número de vogais na string. O número de consoantes na string.

# Entrada
# Olá Mundo

# Saída
# Vogais: 4
# Consoantes: 4

import unicodedata
entrada = input().strip()
entrada = entrada.lower()
entrada = unicodedata.normalize('NFD', entrada).encode('ascii', 'ignore').decode('utf-8')
entrada = entrada.split(" ")

def quant_vogais(n):
    vogais = ['a', 'e', 'i', 'o', 'u']
    num_vogais = 0
    for j in n:
        if j in vogais:
            num_vogais += 1 
    return num_vogais
    
def quant_conso(n):
    vogais = ['a', 'e', 'i', 'o', 'u']
    num_conso = 0
    for j in n:
        if j.isalpha() and j not in vogais:
            num_conso += 1
    return num_conso

n_vogais = 0
n_conso = 0
for i in entrada: 
    n_vogais += quant_vogais(i)
    n_conso += quant_conso(i)
    
print(f"Vogais: {n_vogais}\nConsoantes: {n_conso}")

# FEITO