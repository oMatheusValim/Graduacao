# Faça um programa que dado o nome e sobrenome de uma pessoa, imprima o nome completo desta pessoa da seguinte forma:

# Sobrenome, Nome.

# Fique atento, pois e preciso que a primeira letra de cada palavra seja maiúscula e o resto das letras minúsculas.

# Sample Input:
# joãO
# sILVA

# Sample Output:
# Silva, João

nome = input().strip()
sobrenome = input().strip()
completo = [sobrenome, nome]
completo[0].lower()
completo[1].lower()
maiusculo = [item.capitalize() for item in completo]
print(", ".join(maiusculo))
