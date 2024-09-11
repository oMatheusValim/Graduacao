# Desenvolva um programa em Python que receba um número inteiro e verifique se ele é um número primo. O código deve retornar "É primo" se o número for primo e "Não é primo" se o número não for primo.

# Entrada
# 7

# Saída
# É primo

# Entrada
# 10

# Saída
# Não é primo

i = 2
entrada = int (input())
if entrada == 2:
    print("É primo")
elif entrada == 1:
    print("Não é primo")
else:
    while i != entrada:
        if entrada%i==0:
            print("Não é primo")
            break
        elif i == (entrada-1) and entrada%i!=0:
            print("É primo")
            break
        else: 
            i += 1
