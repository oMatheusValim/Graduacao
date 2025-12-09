reps = int(input())
while(reps>0):
    div = int(input())
    if div >= 1900:
        print('Divisao 1')
    elif div <= 1899 and div >= 1600:
        print('Divisao 2')
    elif div <= 1599 and div >= 1400:
        print('Divisao 3')
    else:
        print('Divisao 4')
    reps -= 1