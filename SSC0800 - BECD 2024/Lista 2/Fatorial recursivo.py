# Desenvolva um programa em Python que calcule o fatorial de um número inteiro de forma recursiva. O código deve retornar o fatorial do número. Se o número fornecido for negativo, o programa deve exibir uma mensagem de erro: "Erro: número negativo".

# Entrada
# -5

# Saída
# Erro: número negativo

# Entrada
# 5

# Saída
# 120

def fatorial(n):
    if n == 1 or n == 0:
        return 1
    else: 
        return n * fatorial(n-1)

entrada = int(input())

if entrada < 0:
    print("Erro: número negativo")
else:
    resultado = fatorial(entrada)
    print(resultado)
