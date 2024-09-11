# Elabore um programa que faça leitura de vários notas, até que se digite um número negativo. O programa deve imprimir a maior e a menor nota lida. Obs: o número negativo digitado não deve contar como nota.
lista = []
while True:
    entrada = int(input())
    if entrada < 0:
        break
    lista.append(entrada)
ordem = sorted(lista)
menor = ordem[0]
maior = ordem[len(ordem)-1]
print(maior, menor)
