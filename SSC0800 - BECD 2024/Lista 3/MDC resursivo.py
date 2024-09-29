# Crie uma função recursiva que retorne o maior divisor comum de dois valores inteiros.

# Entrada
# 10 35

# Saída
# 5

def min_div(n1, n2):
    i = 1
    div = []
    while i <= min(n1, n2):
        if n1 % i == 0 and n2 % i == 0:
            div.append(i)
        i += 1
    return div

entrada = input().split()
n1 = int(entrada[0])
n2 = int(entrada[1])
resul = list(min_div(n1, n2))
print(resul[-1])

# FEITO