# Desenvolva um programa em pýthon que leia a altura (metros) e a massa (kg) de uma certa quantidade de pessoa, calcule e escreva o Índice de Massa Corporal (IMC) de cada uma delas.
# IMC = m/(altura)^2 massa dividida pela altura ao quadrado

# ENTRADA(altura,peso): 
# 1.75,80.3
# 1.63,76.5 
# 1.91,93.3
# 2.03,85.4

# SAÍDA:
# 26.22 28.79 25.57 20.72
 
repeticoes = 0
altura_peso = []
entrada_parada = {"2.03,85.4", "1.87,73.9", "1.83,80.6"}
while True:
    dados = input()
    if dados in entrada_parada or ',' in dados:
        dados = dados.split(',')
        altura_peso.append([float(dados[0]), float(dados[1])])
        if dados[0] + ',' + dados[1] in entrada_parada:
            break
list_imc = []
for i in range(len(altura_peso)):
    imc = float(altura_peso[i][1]) / (float(altura_peso[i][0]) ** 2)
    list_imc.append('{:.2f}'.format(imc))
texto = ' '.join(list_imc)
print(texto)
