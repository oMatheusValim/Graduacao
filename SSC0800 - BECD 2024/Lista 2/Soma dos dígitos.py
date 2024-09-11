# Desenvolva um programa em Python que receba um número inteiro e calcule a soma dos seus dígitos. O código deve retornar a soma dos dígitos do número.

# Entrada
# 123

# Saída
# 6

# Entrada
# 456

# Saída
# 15

entrada = input()
separa = list(entrada)
soma = 0
i=0
while i < len(separa):
    soma += int(separa[i])
    i += 1
print(soma)

# FEITO