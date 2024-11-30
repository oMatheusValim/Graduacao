import pandas as pd

df = pd.read_csv('dados_faltantes_ex1.csv')

print(df.head()) # exibe as 5 linhas

valores_ausentes = df.isnull().sum() #identifica e conta as colunas que tem elementos faltantes
print(valores_ausentes)

idade_media = df['Idade'].mean() # calcula a média da idade
df['Idade'] = df['Idade'].fillna(idade_media) # preenche as colunas vazias com a média
df['Idade'] = df['Idade'].round(1) # arredonda a média para 1 casa decimal

df = df.dropna(subset=['Renda Anual']) # exclui as linhas que tem a Renda Anual vazia

df.to_csv('dados_limpos_ex1.csv', index = False) # salva

print(df.head())