# Ler um ano inicial e um ano final e imprimir todos os anos bissextos desse intervalo em ordem crescente. Incluir o ano inicial e o ano final no intervalo.

inicio = int(input())
final = int(input())

for ano in range(inicio, final + 1):
    if ano % 400 == 0 or (ano % 4 == 0 and ano % 100 != 0):
        print(ano)

# FEITO