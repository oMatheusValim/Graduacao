# Escreva uma função em Python que recebe uma string e retorna o número de letras maiúsculas e minúsculas.

# Entrada
# João e Maria

# Saída
# Maiúscula: 2
# Minúscula: 9

def filtro(lista1):
    letras = [char for char in lista1 if char.isalpha()]
    return letras
def contar(lista2):
    min = sum(1 for char in lista2 if char.islower()) 
    max = sum(1 for char in lista2 if char.isupper())
    return min, max

entrada = input().strip()
letra_filtradas = filtro(entrada)
minusculas, maiusculas = contar(letra_filtradas)
print(f'Maiúsculas: {maiusculas}\nMinúsculas: {minusculas}')
