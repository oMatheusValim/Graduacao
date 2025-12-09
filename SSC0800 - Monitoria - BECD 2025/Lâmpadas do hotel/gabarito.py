i1 = int(input().strip())
i2 = int(input().strip())
f1 = int(input().strip())
f2 = int(input().strip())
cont = 0

if i2 != f2:
    cont +=1

    if i2 == 1:
        i2 = 0
    else:
        i2 = 1

    if i1 == 1:
        i1 = 0
    else:
        i1 = 1
    
    

if i1 != f1:
    if i1 == 0:
        i1 = 1
    else:
        i1 = 0
    cont += 1

print(cont)