# Dada uma lista de números, escreva uma função que verifique se a lista está em ordem crescente. A função deve retornar True se a lista estiver ordenada e False caso contrário.

# Entrada
# "1 3 2 4"

# Saída
# False

entrada = input().split()
ordem = sorted(entrada)
if entrada == ordem:
    print(True)
else:
    print(False)
