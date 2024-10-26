# Crie uma função recursiva que verifique se uma string contendo apenas parênteses ( e ) está corretamente balanceada. Uma string está corretamente balanceada se para cada ( há um correspondente ) na ordem correta.

# Entrada
# "(())"

# Saída
# True

def veri(n):
    cont1, cont2 = 0, 0
    for i in n:
        if i == "(":
            cont1 += 1
        elif i == ")":
            cont2 += 1
    if cont1 == cont2:
        return True
    return False
entrada = input().strip()
print(veri(entrada))
    
# FEITO    