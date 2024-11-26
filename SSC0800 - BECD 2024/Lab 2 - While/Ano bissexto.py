# Crie um algoritmo que verifica se um dado ano é ou não bissexto. A resposta deve ser Sim ou Nao. Obs: um ano é bissexto se ele for divisível por 400 ou se ele for divisível por 4 e não por 100.

ano = int(input())
if ano%400==0  or ano%4==0 and ano%100!=0:
    print("Sim")
else:
    print("Nao")  