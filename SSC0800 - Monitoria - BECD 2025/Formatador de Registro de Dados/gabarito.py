# Lê a linha de dados brutos
linha_bruta = input()

# --- Bloco de Inicialização ---
# Variáveis para armazenar os dados extraídos
id_usuario = ""
nome = ""
idade = 0
cidade = ""

# --- Bloco de Extração e Limpeza (Manipulação de Strings) ---
# 1. Divide a string principal em partes, usando o hífen como separador
partes = linha_bruta.split('-')

# 2. Itera sobre cada parte (ex: "ID:usr101")
for parte in partes:
    # 3. Divide a parte no ':' para separar a chave do valor
    chave, valor = parte.split(':', 1) # O '1' garante que só divida no primeiro ':'
    
    # 4. Verifica a chave e aplica a formatação correta ao valor
    if chave.strip().upper() == 'ID':
        id_usuario = valor.strip().lower()
    elif chave.strip().upper() == 'NOME':
        nome = valor.strip().title()
    elif chave.strip().upper() == 'IDADE':
        idade = int(valor) # A conversão para int remove zeros à esquerda
    elif chave.strip().upper() == 'CIDADE':
        cidade = valor.strip().upper()

# --- Bloco de Impressão do Relatório ---
print("--- Ficha Cadastral ---")
print(f"ID: {id_usuario}")
print(f"Nome: {nome}")
print(f"Idade: {idade}")
print(f"Cidade: {cidade}")
