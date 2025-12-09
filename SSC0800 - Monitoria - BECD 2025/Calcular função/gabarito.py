fx = int(input())
cont = 0
for i in range(1, fx+1):
    if i%2 != 0:
        cont -= i
    else:
        cont += i
print(cont)