# Desenvolva um programa em python que realize a operação fornecida na entrada de dados. Os códigos das operações são: + (soma), - (subtração), * (multiplicação), / (divisão) e ^ (potência). O código deve calcular o resultado da operação.
# No caso da divisão, se o valor da base e do expoente forem ambos nulos, deve-se exibir a seguinte mensagem na saída: "Erro: base e expoente nulos"
# No caso da divisão, se o valor do divisor for nulo, deve-se exibir a seguinte mensagem na saída: "Erro: divisão por zero"

# Entrada
# 2*3

# Saída
# 2*3=6

# Entrada
# 2^3

# Saída
# 2^3=8

# Entrada
# 3/2

# Saída
# 3/2=1.5

entrada = input().strip()
if "*" in entrada:
    operador = "*"
    valores = entrada.split("*")
elif "/" in entrada:
    operador = "/"
    valores = entrada.split("/")
elif "^" in entrada:
    operador = "^"
    valores = entrada.split("^")
elif "+" in entrada:
    operador = "+"
    valores = entrada.split("+")
elif "-" in entrada:
    operador = "-"
    valores = entrada.split("-")
else:
    operador = None
    print("Digite valores válidos")
        
num1 = int(valores[0])
num2 = int(valores[1])

if num1 == 0 and num2 == 0:
    print("Erro: base e expoente nulos")
elif operador == "/" and num2 == 0:
    print("Erro: divisão por zero")
else:
    if operador == "*":
        resultado = num1 * num2 
    elif operador == "/":
        resultado = None
        divisao = num1/num2
        print(round(divisao, 3))
    elif operador == "^":
        resultado = num1 ** num2
    elif operador == "+":
        resultado = num1 + num2
    elif operador == "-":
        resultado = num1 - num2
    else:
        resultado = None
    
    if resultado is not None:
        print(resultado)
