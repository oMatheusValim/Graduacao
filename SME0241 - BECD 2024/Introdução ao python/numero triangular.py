# Dizemos que um número natural é triangular se ele é produto de três número naturais consecutivos.
# Exemplo: 120
# 120 é triangular, pois 4 x 5 x 6 = 120

# Faça um programa que dado um inteiro não negativo  n, verifique se n é triangular

# Entrada:
# n

# Saída:
# triangular/não triangular

# Sample Input:
# 120

# Sample Output:
# triangular

numero = int(input())
resul = 'não triangular'
for i in range(1, numero):
    if i * (i+1) * (i+2) == numero:
        resul = 'triangular'
        break
print(resul) 
