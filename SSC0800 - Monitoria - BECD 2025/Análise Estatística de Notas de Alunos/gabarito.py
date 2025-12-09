import numpy as np

n = int(input())

alunos_notas = {}

for _ in range(n):
    linha = input()
    partes = linha.split(',')
    
    aluno = partes[0].strip()
    nota = float(partes[1].strip())
    
    if aluno not in alunos_notas:
        alunos_notas[aluno] = [] 
    
    alunos_notas[aluno].append(nota)

ordem_alfabetica = sorted(alunos_notas.keys())

for aluno in ordem_alfabetica:
    notas_lista = alunos_notas[aluno]
    notas_array = np.array(notas_lista)
    
    media = np.mean(notas_array)
    mediana = np.median(notas_array)
    desvio_padrao = np.std(notas_array)
    
    print(f"Aluno(a): {aluno}")
    print(f"- Média: {media:.2f}")
    print(f"- Mediana: {mediana:.2f}")
    print(f"- Desvio Padrão: {desvio_padrao:.2f}")