# Dada uma lista de tuplas onde cada tupla contém um nome e uma idade, escreva uma função que ordene a lista pela idade em ordem crescente. A função deve retornar a lista ordenada.

# Entrada
# [('João', 25), ('Maria', 22), ('Pedro', 30)]

# Saída
# [('Maria', 22), ('João', 25), ('Pedro', 30)]

def ordem(n):
    return sorted(n, key=lambda x: x[1])
entrada = eval(input())
resul = ordem(entrada)
print(resul)
