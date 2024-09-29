# Escreva um programa que intercale os elementos de duas listas: 
# L1 (composta por números inteiros) e L2 (composta por letras) de tamanhos diferentes.

# Entrada:
# 1 2 3 4
# a b c

# Saida:
# 1 a 2 b 3 c 4

# Sample Input:
# 6 13 8 8 1 2 12 0 3 12 5 14 8 14 12 3 12
# W C x R K v K C J e z D R J d

# Sample Output:
# 6 W 13 C 8 x 8 R 1 K 2 v 12 K 0 C 3 J 12 e 5 z 14 D 8 R 14 J 12 d 3 12

def intercalar(n1, n2):
    mescla = []
    tamanho_minimo = min(len(n1), len(n2))
    for i in range(tamanho_minimo):
        mescla.append(n1[i])
        mescla.append(n2[i])
    if len(n1) > tamanho_minimo:
        mescla.extend(n1[tamanho_minimo:])
    elif len(n2) > tamanho_minimo:
        mescla.extend(n2[tamanho_minimo:])
    return mescla
l1 = input().split()
l2 = input().split()
result = intercalar(l1, l2)
print(" ".join(result))
