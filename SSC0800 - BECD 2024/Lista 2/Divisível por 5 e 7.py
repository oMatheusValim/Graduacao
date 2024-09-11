# Escreva um programa em Python que retorna os números divisíveis por 7 e múltiplos de 5 no intervalo [Mín, Máx], onde Min e Máx são fornecidos como entrada.
# Dica: Use ','.join() para formatar a saída

# Entrada
# A entrada apresenta os valores Min e Máx:
# 100 200

# Saída
# 105,140,175

entrada = input().split(",")
min = int(entrada[0])
max = int(entrada[1])
numeros = []
for i in range(min, max+1):
    numeros.append(i)
divi = []
for j in numeros:
    if j%7==0 and j%5==0:
        divi.append(str(j))
print(",".join(divi))
