# Dado um número natural n. Faça um programa para calcular o n-ésimo termo da Sequência Fibonacci.
# Sendo, F(0) = 0, F(1) = 1, F(N) = F(n-1) + F(n-2) para n > 1

# Entrada:
# n

# Saída:
# F(n)

# Sample Input:
# 5

# Sample Output:
# 5

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

