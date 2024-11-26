# Dado um dicionário onde as chaves são os nomes dos alunos e os valores são listas de notas, escreva uma função que calcule a média das notas de cada aluno. A função deve retornar um dicionário com os alunos e suas respectivas médias.

# Entrada
# {'Ana': [10, 8, 9], 'Beto': [7, 5, 6], 'Carla': [8, 9, 10]}

# Saída
# {'Ana': 9.0, 'Beto': 6.0, 'Carla': 9.0}

import ast 

def calcular_media(aluno_media):
    if isinstance(aluno_media, str):
        aluno_media = ast.literal_eval(aluno_media)
    
    media = {}
    for aluno, notas in aluno_media.items():
        media[aluno] = sum(notas) / len(notas)
        media[aluno] = round(media[aluno], 2)
    return media

entrada = input()
result = calcular_media(entrada)
print(result)
