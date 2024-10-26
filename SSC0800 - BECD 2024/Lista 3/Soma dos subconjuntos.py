# Implemente uma função recursiva que receba um array de inteiros e um valor-alvo target (fornecidos em uma única entrada, separados por espaço), e retorne se é possível encontrar um subconjunto cujos elementos somam target.

# Entrada
# 1 2 3 7 6

# Saída
# True

def veri(possiveis, target):
    lista2 = [0]
    for i in possiveis:
        for j in lista2[::]:
            if (i+j) == target:
                return True 
            else:
                lista2.append(i+j)
    return False
entrada = input().split()
target = int(entrada[-1])
possiveis = list(map(int, entrada[:-1]))
print(veri(possiveis, target)) 
