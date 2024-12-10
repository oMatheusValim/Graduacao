# Implemente uma função recursiva em Python que calcule a soma de uma série definida para um número n. Mas antes é importante entender o que é uma série.

# Série Harmônica: A soma de uma série como S(n) é conhecida como série harmônica, onde a soma envolve frações que vão de 1/1 até 1/n. A função recursiva deve calcular essa soma.

# Funcionamento Recursivo:
# A base da recursão ocorre quando n = 1. Nesse caso, o valor retornado deve ser 1, pois a soma de apenas 1/1 é igual a 1.
# A cada passo recursivo, a função deve somar 1/n ao valor da função para n - 1. Ou seja, a função S(n) pode ser definida como: S(n) = 1/n + S(n-1)
# A recursão termina quando n atinge o valor 1.

# Exemplo de Entrada
# 7

# Exemplo de Saída
# 2.592

# Entendendo o cálculo:
# Para n = 7, o cálculo é feito da seguinte maneira:
# S(7) = 1/7 + S(6)
# S(6) = 1/6 + S(5)
# S(5) = 1/5 + S(4)
# S(4) = 1/4 + S(3)
# S(3) = 1/3 + S(2)
# S(2) = 1/2 + S(1)
# S(1) = 1 (caso base)

# Ao retornar os valores:
# S(1) = 1
# S(2) = 1/2 + 1 = 1.5
# S(3) = 1/3 + 1.5 = 1.8333...
# S(4) = 1/4 + 1.8333... = 2.0833...
# S(5) = 1/5 + 2.0833... = 2.2833...
# S(6) = 1/6 + 2.2833... = 2.45
# S(7) = 1/7 + 2.45 = 2.592 (aproximado a 3 casas decimais)

def serie_recursiva(valor, num=1, soma=0):
    if num > valor:
        return soma
    soma += 1 / num
    return serie_recursiva(valor, num + 1, soma)

valor = int(input())
result = int(serie_recursiva(valor) * 10**3) / 10**3
print(result)