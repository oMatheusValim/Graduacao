validos = []
while True:
    valor = float(input())
    if valor == -1:
        break
    if valor < 0 or valor > 14:
        continue

    validos.append(valor)

if len(validos) == 0:
    print("Nenhum dado valido foi coletado.")
else:
    maximo = max(validos)
    minimo = min(validos)
    media = sum(validos)/len(validos)
    print(f'Numero de coletas validas: {len(validos)}')
    print(f'pH maximo: {maximo}')
    print(f'pH minimo: {minimo}')
    print(f'pH medio: {media:.1f}')