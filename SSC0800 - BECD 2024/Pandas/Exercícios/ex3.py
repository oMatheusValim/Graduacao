import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns

df = pd.read_csv('clientes_ex3.csv')
print(df.head())

df_filtro = df[(df['Valor da Compra'] > 500) & (df['Cidade'] == 'São Paulo')] # filtra deixando apenas valores de compra acima de 500 e em São Paulo

df_limpo = df_filtro.drop_duplicates(subset=['Nome', 'E-mail'])

print(df_limpo)

df_limpo.to_csv('clientes_filtrados_ex3.csv', index = False) # salva

plt.figure(figsize=(10, 5))
sns.histplot(df['Valor da Compra'], bins=30, kde=True, color='skyblue')
plt.title('Histograma do Valor da Compra')
plt.xlabel('Valor da Compra (R$)')
plt.ylabel('Frequência')
plt.show()

plt.figure(figsize=(8, 5))
sns.boxplot(data=df, x='Valor da Compra', color='lightgreen')
plt.title('Boxplot do Valor da Compra')
plt.xlabel('Valor da Compra (R$)')
plt.show()

plt.figure(figsize=(12, 6))
df['Cidade'].value_counts().plot(kind='bar', color='coral')
plt.title('Contagem de Compras por Cidade')
plt.xlabel('Cidade')
plt.ylabel('Número de Compras')
plt.xticks(rotation=45)
plt.show()