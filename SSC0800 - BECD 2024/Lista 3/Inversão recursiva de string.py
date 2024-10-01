# Implemente uma função recursiva que receba uma string e retorne a string invertida.

# Entrada
# recursao

# Saída
# oasrucer

def inverte_recursivo(s):
    if len(s) == 0:  
        return s
    else:
        return inverte_recursivo(s[1:]) + s[0] 

entrada = input().strip()
resultado = inverte_recursivo(entrada)
print(resultado)
