# Elaborar um algoritmo que calcula e exibe as médias das 3 provas (MP), dos 2 trabalhos (MT) e final (MF). 
# MP: (2P1 + 3P2 + 3P3)/8 
# MT = (T1+2T2)/3 
# MFinal = (7MP + 3MT)/10 
# 
# Entradas: P1 P2 P3 T1 T2 
# 
# Saídas: MP MT MFinal

P1 = float (input())
P2 = float (input())
P3= float (input())
T1 = float (input())
T2 = float (input())
MP = (2*P1 + 3*P2 + 3*P3)/8
MT = (T1+2*T2)/3
MFinal = (7*MP + 3*MT)/10
print(f'{MP} {MT} {MFinal}')