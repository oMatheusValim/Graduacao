matriz = []    
while True:
    if len(matriz) == 9:
        break
    
    valor = int(input())
    matriz.append(valor)

maior = matriz[0]
for i in range(1, len(matriz)):
    if matriz[i] > maior:
        maior = matriz[i]

for e in range(len(matriz)):
    if matriz[e] == maior:
        matriz[e] = -1

print(f'{matriz[0]} {matriz[1]} {matriz[2]}\n{matriz[3]} {matriz[4]} {matriz[5]}\n{matriz[6]} {matriz[7]} {matriz[8]}')



