# Crie uma função que recebe um inteiro N e uma lista L com 10 inteiros. A Função deve retornar o número de vezes que N aparece na lista L. 

# Crie um programa que lê o inteiro N e a lista L, execute a função e imprima o resultado.

lista = []
while len(lista) < 11:
    entrada = int(input().strip())
    lista.append(entrada)
numero = lista[0]
cont = -1
for i in lista:
    if i == numero:
        cont += 1
print(cont)
