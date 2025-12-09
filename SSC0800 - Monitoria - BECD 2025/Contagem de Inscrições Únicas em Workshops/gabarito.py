try:
    n = int(input())
except (ValueError, IndexError):
    n = 0

inscricoes_por_workshop = {}

for _ in range(n):
    partes = input().split(',')
    if len(partes) == 2:
        nome = partes[0].strip()
        workshop = partes[1].strip()

        if workshop not in inscricoes_por_workshop:
            inscricoes_por_workshop[workshop] = set()
        
        inscricoes_por_workshop[workshop].add(nome)

workshop_alvo = input().strip()

# Usa o método .get() para buscar o conjunto de alunos do workshop alvo.
# Se o workshop não existir no dicionário, .get() retorna um conjunto vazio como padrão.
alunos_no_workshop = inscricoes_por_workshop.get(workshop_alvo, set())

print(len(alunos_no_workshop))
