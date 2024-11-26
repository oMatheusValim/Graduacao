# Faça um programa que receba a altura (em metros) e o sexo de uma pessoa, calcule e imprima o seu peso ideal, utilizando as seguintes fórmulas:

# Para homens: (72.7 * Altura) – 58 
# Para mulheres: (62.1 * Altura) – 44.7 
# Sugestão: o sexo deve ser um caractere ‘h’ ou ‘m’

altura = float (input ())
sexo = input()
if sexo == "h":
    ideal = (72.7*altura)-58
elif sexo == "m":
    ideal = (62.1 * altura)-44.7
print(ideal)