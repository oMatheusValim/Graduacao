# Ler x e y (inteiros) e depois exibir a soma dos números de x a y. Obs: Incluir os valores de x e y na soma.

# ENTRADA
# 2
# 5

# SAÍDA
# 14
# (2+3+4+5)

x = int(input())
y = int(input())
soma = 0
while x <= y:   
    soma += x
    x += 1
print(soma)
