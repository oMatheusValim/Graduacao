# Implemente uma função recursiva que retorne o n-ésimo termo da sequência de Fibonacci.

# Entrada
# 6

# Saída
# 8

def fibonacci(n, memo={}):
    if n in memo:
        return memo[n]
    elif n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        memo[n] = fibonacci(n-1, memo) + fibonacci(n-2, memo)
        return memo[n]
entrada = int(input().strip())
fibo = fibonacci(entrada)
print(fibo)

# FEITO