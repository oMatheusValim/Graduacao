# Crie uma função recursiva que receba um número inteiro positivo N e calcule o somatório dos números de 1 a N. Dica: use o exemplo de função recursiva do cálculo fatorial como referência.

def soma(n):
    if n == 0:
        return 0
    else:
        return n + soma(n-1)
entrada = int(input())
resul = soma(entrada)
print(resul)