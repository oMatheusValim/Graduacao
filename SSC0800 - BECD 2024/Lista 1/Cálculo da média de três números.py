# Desenvolva um código em Python que leia três números inteiros e escreva a média desses três números

# Entrada
# A entrada será fornecida no seguinte formato:
# n1 n2 n3

# Saída
# A saída será a média dos três números, arredondada para uma casa decimal

entrada = input().split(" ")
n1 = entrada[0]
n2 = entrada [1]
n3 = entrada [2]
n1_mod, n2_mod, n3_mod = map(int, entrada)
media = (n1_mod+n2_mod+n3_mod)/3
print('%.1f' %(media))

# FEITO