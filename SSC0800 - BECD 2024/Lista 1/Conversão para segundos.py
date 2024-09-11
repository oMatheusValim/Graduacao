# Desenvolva um código em python que leia uma quantidade em horas, minutos, segundos e escreva a quantidade total de segundos equivalente.

# Entrada
# A entrada será fornecida no seguinte formato HH:MM:SS
# 02:30:53

# Saída
# 9053

horario = input().split(":")
hora = (int(horario[0]))*3600
minuto = (int(horario[1]))*60
segundo = (int(horario[2]))
print(hora+minuto+segundo)
