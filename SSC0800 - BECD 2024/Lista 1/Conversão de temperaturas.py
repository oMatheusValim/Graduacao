# Desenvolva um código em python que leia um número, representando uma temperatura na escala Celsius, calcule e escreva.
# (a) Seu correspondente em Farenheit (F = 9*C/5 + 32)
# (b) Seu correspondente em Kelvin (K = C + 273)

# Entrada
# A entrada será fornecida no seguinte formato: 
# 100 C

# Saída
# 212 F
# 373 K

temp_celsius = input().split(" ")
temp_celsius_convert = temp_celsius[0]
celsius = int(temp_celsius_convert)
temp_farenheit = ((9*celsius)/5) + 32
temp_kelvin = celsius + 273
if 9*celsius%5==0:
    print ('%.d F\n%.d K'%(temp_farenheit, temp_kelvin))
else:
    print (f'{temp_farenheit} F\n{temp_kelvin} K')
