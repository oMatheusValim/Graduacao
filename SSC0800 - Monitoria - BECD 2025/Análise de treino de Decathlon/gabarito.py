tipo = input().strip()
if tipo == 'P':
    p1, p2, p3 = float(input()), float(input()), float(input())
    maior = max(p1, p2, p3)
    print(f'Melhor marca: {maior:.1f}')
elif tipo == 'D':
    distancia, tempo = float(input()), float(input())
    pace = tempo/(distancia/1000)
    print(f'Pace: {pace:.2f} min/km')
else:
    print('Entrada invalida')
