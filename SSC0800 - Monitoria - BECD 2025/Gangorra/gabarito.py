p1 = int(input())
c1  = int(input())
p2  = int(input())
c2  = int(input())

le = p1 * c1
ld = p2*c2 

if le == ld:
    print(0)
elif le > ld:
    print(-1)
else:
    print(1)
