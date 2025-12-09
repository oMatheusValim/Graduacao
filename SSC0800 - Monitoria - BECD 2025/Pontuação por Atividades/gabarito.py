esporte = int(input())*2
artes  = int(input())*3
ciencias  = int(input())*5
soma = esporte + artes + ciencias

if soma >= 200:
    print('O')
elif soma >= 150 and soma < 200:
    print('S')
elif soma >= 100 and soma < 150:
    print('B')
else:
    print('N')
