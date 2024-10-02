# Faça uma função recursiva que receba N e retorne o N-ésimo termo da sequência Fibonacci, sendo N>2. Ex: para N = 4, retorno = 2. Para N = 6, retorno = 5.

def fibo(n, memo={}):
    if n in memo:
        return memo[n]
    
    elif n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        memo[n] = fibo(n-1, memo) + fibo(n-2, memo)
        return memo[n]
N = int(input())
print(fibo(N-1))
