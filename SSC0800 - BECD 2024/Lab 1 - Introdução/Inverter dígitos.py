# Faça um programa para ler um número inteiro, positivo de três dígitos, e gerar outro número formado pelos dígitos invertidos do número lido. Ex: 325 -> 523

numero =input()
invert = int (numero[::-1])
print(invert) 