# Implemente uma função recursiva que gere todas as permutações possíveis de uma string.

# Entrada
# abc

# Saída
# abc
# acb
# bac
# bca
# cab
# cba

def permut(inp, cont = 0):
    if cont == len(inp):
        print("".join(inp))
    else:
        for i in range(cont, len(inp)):
            inp[cont], inp[i] = inp[i], inp[cont]
            permut(inp, cont + 1)
            inp[cont], inp[i] = inp[i], inp[cont] 

entrada = list(input().strip())
permut(entrada)
