# Crie uma função que recebe um inteiro e retorna 1 se ele for primo. Caso contrário, retorna 0.
# Crie outra função que recebe os inteiros A e B, sendo A menor que B, e retorna uma lista com os números primos que estão no intervalo [A B].
# O programa deve ler os valores de A e B, executar a segunda função, e imprimir a lista retornada. A segunda função deve usar a primeira função para verificar quais números são primos.

def primo(n):
    if n < 2:
        return 0
    for p in range(2, int(n**0.5)+1):
        if n % p == 0:
            return 0
    return 1

def veri(n1, n2):
    primos = []
    for i in range(n1, n2+1):
        if primo(i) == 1:
            primos.append(i)
    return primos
    
minimo = int(input())
maximo = int(input())
valido = veri(minimo, maximo)
print(valido)