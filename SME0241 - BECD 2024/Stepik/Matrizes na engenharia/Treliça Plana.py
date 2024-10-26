#Implemente um código para determinar quais as barras mais solicitadas de uma treliça dada sujeita a uma determinada força externa. A entrada contém as coordenadas de Nv vértices, as conectividades de  Nb barras, os nós a serem fixados e a força externa a ser aplicada. Considere todas as treliças formadas por barras articuladas com módulo de Young igual a  E = 1x 10^11 Pa e área da seção transversal de  A = 1x10^-5 m².

# ENTRADA:
# Primeira linha contém o número de vértices Nv e o número de barras Nb
# Na sequência temos Nv linhas contendo as coordenadas (Xi, Yi)
# E Nb linhas contendo as conectividades (Ik, Jk)
# Uma linha contendo os índices dos nós I0... iNr para serem restritos em x e em y
# Uma linha contendo o índice do nó a ser aplicado a força externa
# Nv Nb
# Xo Yo 
# .
# .
# .
# Xnv Ynv
# I0 J0
# .
# .
# .
# Inb Jnb
# I0 ... Inr
# Iext Fx Fy

# SAÍDA
# Indeces das barras mais solicitadas: a mais comprida e a mais tracionada
# Imin Imax

import numpy as np

def rigidez(coordenada, conectividade, modulo):
    num_vertices, num_barras = coordenada.shape[0], conectividade.shape[0]
    Kglo = np.zeros((2*num_vertices, 2*num_vertices))
    for ib in range(num_barras):
        Kloc = np.zeros((4,4))
        na, nb = int(conectividade[ib,0]), int(conectividade[ib,1])
        Xa, Xb = coordenada[na,:].reshape((2,1)), coordenada[nb,:].reshape((2,1))
        d = Xb - Xa
        l0 = np.linalg.norm(d, 2)
        kk = modulo[ib] / (l0**3)
        aux = d@d.T
        Kloc[0:2,0:2] =  kk * aux
        Kloc[0:2,2:4] = -kk * aux
        Kloc[2:4,0:2] = -kk * aux
        Kloc[2:4,2:4] =  kk * aux
        loc2glo = [2*na, 2*na + 1, 2*nb, 2*nb + 1]
        for j in range(4):
            for k in range(4):
                jglo = loc2glo[j]
                kglo = loc2glo[k]
                Kglo[jglo,kglo] = Kglo[jglo,kglo] + Kloc[j,k]
    return Kglo

def tracoes(coord, conec, modu, uu):
  num_vertices = coord.shape[0]
  num_barras = conec.shape[0]
  tracao = np.zeros(num_barras)
  ud = np.zeros(2)
  for ib in range(num_barras):
    ka = int(conec[ib, 0])
    kb = int(conec[ib, 1])
    Xa = coord[ka, :]
    Xb = coord[kb, :]
    ud[0] = uu[2*kb]   - uu[2*ka]
    ud[1] = uu[2*kb+1] - uu[2*ka+1]
    d = Xb - Xa
    l0 = np.linalg.norm(d)
    kkt = modu[ib] / (l0**2)
    tracao[ib] = kkt * np.dot(d, ud)
  return tracao

num_vertices, num_barras = map(int,input().split())

aux = []
for i in range(num_vertices):
    x,y = map(float,input().split())
    aux.append(x)
    aux.append(y)
vertices = np.array(aux).reshape(num_vertices,2)

aux = []
for i in range(num_barras):
    x,y = map(float,input().split())
    aux.append(x)
    aux.append(y)
conectividades = np.array(aux).reshape(num_barras,2)

vfix = list(map(int,input().split())) 

vext, Fx, Fy = map(float,input().split())
vext = int(vext)

Young = 10**11
Area = 10**(-5)
modulos = (Young*Area) * np.ones(num_barras)

kglo = rigidez(vertices,conectividades,modulos)

ld = np.zeros(2*num_vertices)
ld[(2*int(vext))] = Fx
ld[(2*int(vext)+1)] = Fy 


kk = kglo
iden = np.eye(2*num_vertices)
for n in vfix:
    kk[2*n:2*n+2,:] = iden[2*n:2*n+2,:]

uu = np.linalg.solve(kk, ld)

tracao = tracoes(vertices, conectividades, modulos, uu)

indice_maximo = np.argmax(tracao)
indice_minimo = np.argmin(tracao)

print(indice_minimo,indice_maximo)

# FEITO