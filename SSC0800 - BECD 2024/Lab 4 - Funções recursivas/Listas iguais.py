# Faça um programa que leia 2 listas de 5 inteiros (primeiro a lista A, e depois a lista B). Verifique se as listas são idênticas comparando elemento a elemento. Se elas forem idênticas, imprimir 1. Caso contrário, imprimir 0

def veri(n1, n2):
    binario = []
    for i in range(len(n1)):
        if n1[i] == n2[i]:
            binario.append(1)
        else: 
            binario.append(0)
    if sum(binario) == 5:
        return 1
    else:
        return 0
lista1 = []
lista2 = []
while len(lista1) + len(lista2) < 10:  
    while len(lista1) < 5:
        entrada = int(input().strip())
        lista1.append(entrada)
    while len(lista2) < 5:
        entrada = int(input().strip())
        lista2.append(entrada)        
result = veri(lista1, lista2)
print(result)
