maior = 0
while True:
    ent = int(input())
    if(ent == 0):
        break

    if ent > maior:
        maior = ent
print(maior)