# Desenvolva um código que recebe como entrada o tipo de cálculo a ser feito a partir de duas opções: 
# • Opção 1: retorna o valor da série s(x)= x + (x2)/2 + (x3)/3 + (x4)/4+(x5)/5+... O 
# valor de x e n serão fornecidos como entrada para uma FUNÇÃO que deverá retornar o valor s(x). Lembre-se que x**i representa x elevado à pontência i 
# • Opção 2: retona todos os números divisíveis por n. Uma FUNÇÃO deverá receber o valor de n e retornar todos os seus divisores. 

# Entrada 
# 1 
# 1 10 

# A primeira entrada é a opção, no caso cima, opção 1. 
# A segunda entrada é o valor de x =1 e o tamanho da série n=10 

# Saída 
# 2.93 

# Na saída, utilize o formatador f'{saida:.2f} para restringir a duas casas decimais. 

# Entrada 
# 2 
# 180 

# A primeira entrada é a opção, no caso cima, opção 2. 
# A segunda entrada é o valor de n=180, número cujos divisores devem ser calculados. 

# Saída 
# [1, 2, 3, 4, 5, 6, 9, 10, 12, 15, 18, 20, 30, 36, 45, 60, 90] 

# A saída é a lista de divisores do valor de entrada.

def soma(x, i):
    somas = []
    for e in range(1, i+1):
        conta = (x**e)/ e
        somas.append(conta)
    return somas

def div(n):
    divisores = []
    for j in range(1, n):
        if n % j == 0:
            divisores.append(j)
    return divisores


option = int(input().strip())
if option == 1:
    entrada1 = input().split()
    valorX = float(entrada1[0])
    serie = int(entrada1[1])
    result1 = sum(soma(valorX, serie))
    print('%.2f' % (result1))
elif option == 2:
    entrada2 = int(input().strip())
    result2 = div(entrada2)
    print(result2)
else:
    print("Digite 1 ou 2")