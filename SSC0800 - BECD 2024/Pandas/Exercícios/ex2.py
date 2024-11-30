import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv('vendas_ex2.csv')

print(df.head()) # dados iniciais

num_linha_coluna = df.shape # número de linhas e colunas
infos = df.dtypes # tipos de dados de cada coluna

df['Valor Total'] = df['Quantidade'] * df['Preço Unitário'] # criação de uma nova coluna
produto_mais_vendido = df.groupby('Produto')['Quantidade'].sum().idxmax() # produto mais vendido
vendas_por_produto = df.groupby('Produto')['Quantidade'].sum() # quantidade de vendas do produto mais vendido
produto_maior_valor = df.groupby('Produto')['Valor Total'].sum().idxmax() # produto com maior valor total de vendas
valor_total_por_produto = df.groupby('Produto')['Valor Total'].sum() # quantidade de vendas do produto com maior valor total
esatisticas = df.describe() # Gera estatísticas descritivas dos dados numéricos

print(df.head())

plt.figure(figsize=(10, 5))

plt.subplot(1, 2, 1)
vendas_por_produto.plot(kind='bar', color='skyblue')
plt.title('Quantidade Vendida por Produto')
plt.xlabel('Produto')
plt.ylabel('Quantidade')
plt.xticks(rotation=45)

plt.subplot(1, 2, 2)
valor_total_por_produto.plot(kind='bar', color='lightgreen')
plt.title('Valor Total de Vendas por Produto')
plt.xlabel('Produto')
plt.ylabel('Valor Total (R$)')
plt.xticks(rotation=45)

plt.tight_layout()
plt.show()
