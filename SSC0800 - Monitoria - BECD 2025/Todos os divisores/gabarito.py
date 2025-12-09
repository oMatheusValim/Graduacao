num = int(input())
div = []
for i in range(1, num+1):
    if num%i == 0:
        div.append(i)
print(" ".join(map(str, div)))
