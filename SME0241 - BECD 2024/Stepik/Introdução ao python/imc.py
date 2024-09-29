# Faça um programa que calcule o IMC de uma pessoa, dada a sua massa m em Kg e sua altura a em metros:

# IMC = m/kg²

# Entrada:
# massa altura

# Saída:
# imc
# classificação

entrada = list(input().split())
massa = float(entrada[0])
altura = float(entrada[1])
imc = massa/(altura**2)
if imc < 18.5:
    clas = 'abaixo do peso'
elif 18.5 <= imc < 24.9:
    clas = 'saudável'
elif 24.9 <= imc < 29.9:
    clas = 'sobrepeso'
elif 29.9 <= imc < 34.9:
    clas = 'obesidade grau 1'
elif 34.9 <= imc < 39.9:
    clas = 'obesidade severa'
else: 
    clas = 'obesidade mórbida'
print(f'{imc:.2f}\n{clas}')
