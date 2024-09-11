# Desenvolva um programa em Python que encontre e imprima todos os números perfeitos menores ou iguais a um valor N fornecido. Um número perfeito é um número inteiro positivo que é igual à soma de seus divisores próprios (excluindo ele mesmo). Se N for menor que 6, o programa deve exibir uma mensagem de erro: "Erro: valor de N deve ser maior ou igual a 6". Se não houver números perfeitos menores ou iguais a N, o programa deve exibir a mensagem: "Nenhum número perfeito encontrado".

# Entrada
# 30

# Saída
# 6 28

# Entrada
# 5

# Saída
# Erro: valor de N deve ser maior ou igual a 6

def divisiveis(n):
    divide = []
    for i in range(1,n):
        if n % i == 0:
            divide.append(i)
    return divide

def perfeito(n):
    return sum(divisiveis(n)) == n

entrada = int(input())
if entrada < 6:
    print("Erro: valor de N deve ser maior ou igual a 6")
else:
    numeros_perfeitos = []
    for num in range(6, entrada+1):
        if perfeito(num):
            numeros_perfeitos.append(num)
    if numeros_perfeitos:
        print(" ".join(map(str, numeros_perfeitos)))
    else: 
        print("Nenhum número perfeito encontrado")
        
# FEITO