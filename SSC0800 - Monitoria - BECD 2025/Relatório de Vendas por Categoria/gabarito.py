import numpy as np

# Tenta ler o número de vendas.
try:
    n = int(input())
except ValueError:
    n = 0

# --- Bloco de Agregação (Dicionários) ---
# Dicionário para agrupar os valores de venda por categoria.
# Ex: {'Eletronicos': [1500.0, 2500.0], 'Livros': [49.9, 35.0]}
vendas_por_categoria = {}

# Lê cada linha de venda
for _ in range(n):
    linha = input()
    partes = linha.split(',')
    
    if len(partes) == 2:
        categoria = partes[0].strip()
        valor = float(partes[1].strip())
        
        # Se a categoria ainda não está no dicionário, cria uma lista vazia para ela
        if categoria not in vendas_por_categoria:
            vendas_por_categoria[categoria] = []
        
        # Adiciona o valor da venda à lista da sua categoria
        vendas_por_categoria[categoria].append(valor)

# --- Bloco de Cálculo e Impressão (NumPy) ---
# Ordena as categorias em ordem alfabética para a impressão do relatório
categorias_ordenadas = sorted(vendas_por_categoria.keys())

for categoria in categorias_ordenadas:
    # Pega a lista de valores de venda da categoria atual
    valores = vendas_por_categoria[categoria]
    
    # Converte a lista para um array NumPy para cálculos eficientes
    vendas_array = np.array(valores)
    
    # Usa funções do NumPy para calcular as estatísticas
    contagem = len(vendas_array)
    media = np.mean(vendas_array)
    total = np.sum(vendas_array)
    
    # Imprime o relatório formatado para a categoria
    print(f"Categoria: {categoria}")
    print(f"  - Vendas: {contagem}")
    print(f"  - Média: R$ {media:.2f}")
    print(f"  - Total: R$ {total:.2f}")
