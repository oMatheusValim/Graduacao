# Desenvolva um algoritmo que leia a data de nascimento (dd/mm/aaaa) de uma pessoa e a data atual, calcule e escreva a idade da pessoa.
# Considere a data atual como 04/04/2024 para que os resultados coincidam com a saída fornecida pelo run.codes

# Entrada
# A entrada será fornecida no seguinte formato:
# 23/02/1988

# Saída
# 36 anos, 1 mes e 12 dias

from datetime import *
from dateutil.relativedelta import relativedelta 

nascimento = input()
data_atual = "05/04/2024"
nascimento = datetime.strptime(nascimento, "%d/%m/%Y").date()
data_atual = datetime.strptime(data_atual, "%d/%m/%Y").date()
diferenca = relativedelta(data_atual, nascimento)
if diferenca.months == 1:
    print(f"{diferenca.years} anos, {diferenca.months} mes e {diferenca.days} dias")
elif diferenca.years == 1:
    print(f"{diferenca.years} ano, {diferenca.months} meses e {diferenca.days} dias")
elif diferenca.days == 1:
    print(f"{diferenca.years} anos, {diferenca.months} meses e {diferenca.days} dia")
else:
    print(f"{diferenca.years} anos, {diferenca.months} meses e {diferenca.days} dias")
