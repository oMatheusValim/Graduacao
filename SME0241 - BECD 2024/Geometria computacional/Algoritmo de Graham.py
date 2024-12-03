# Entrada:
# Todas as entradas são constituídas por 10 pontos contidos no quadrado unitário [0,1] x [0, 1].
# 0.271077 0.793607
# 0.711975 0.459884
# 0.702209 0.345870
# 0.909102 0.327819
# 0.505881 0.509876
# 0.963840 0.913256
# 0.483358 0.270156
# 0.752161 0.437632
# 0.752262 0.590640
# 0.694376 0.712609

# Saída:
# A primeira linha corresponde aos dois primeiros pontos após a ordenação angular pois, eles sempre estarão no fecho convexo. As próximas linhas são as atualizações da lista de pontos do fecho convexo quando entrar um ponto candidato porém, remoções devem ficar ocultas ou seja, no algoritmo da aula, basta imprimir os pontos fora do laço de repetição while.
# 0 1
# 0 1 2
# 0 1 3
# 0 1 3 4
# 0 1 5
# 0 1 6
# 0 1 6 7
# 0 1 6 7 8
# 0 1 6 9

import math

def orientacao(p1, p2, p3):
    return (p2[0] - p1[0]) * (p3[1] - p1[1]) - (p2[1] - p1[1]) * (p3[0] - p1[0])

def distancia2(p1, p2):
    return (p2[0]-p1[0])**2 + (p2[1]-p1[1])**2
    
def angulacao_pontos(pontos, ponto_inicial):
    def angulo(p):
        return math.atan2(p[1] - ponto_inicial[1], p[0] - ponto_inicial[0])
    return sorted(pontos, key=lambda p: (angulo(p), distancia2(ponto_inicial, p)))

def algoritmo_graham(pontos):
    p_in_idx = min(range(len(pontos)), key=lambda i: (pontos[i][1], pontos[i][0]))
    ponto_inicial = pontos[p_in_idx]
    ponto_restantes = [pontos[i] for i in range(len(pontos)) if i != p_in_idx]
    pontos_ordenados = angulacao_pontos(ponto_restantes, ponto_inicial)
    pontos_ordenados = [ponto_inicial] + pontos_ordenados
    indices_ordenados = [pontos.index(p) for p in pontos_ordenados]
    
    fecho = [0, 1]
    print(fecho[0], fecho[1])
    
    for i in range(2, len(indices_ordenados)):
        p_atual_idx = i 
        while len(fecho) > 1 and orientacao(pontos_ordenados[fecho[-2]], pontos_ordenados[fecho[-1]], pontos_ordenados[p_atual_idx]) <= 0:
            fecho.pop()
        fecho.append(p_atual_idx)
        print(" ".join(map(str, fecho)))
    
    
pontos = []
for _ in range(10):
    entrada = input().strip().split()
    pontos.append([float(entrada[0]), float(entrada[1])])

algoritmo_graham(pontos)