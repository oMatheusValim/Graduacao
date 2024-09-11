# Ler x e y e calcular x^y sem usar funções ou o operador de potência da linguagem Python.

n1 = int(input())
n2 = int(input())
i = 1 
if n2 == 0:
    print(1)
else:
    potencia = n1
    while i != n2:
        potencia *= n1
        i += 1
print(potencia)
