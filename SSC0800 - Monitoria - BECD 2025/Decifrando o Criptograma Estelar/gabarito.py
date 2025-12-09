# --- Bloco de Leitura do Mapa e Inicialização ---
try:
    m = int(input())
except (ValueError, IndexError):
    m = 0

mapa_cifrado = {}
for _ in range(m):
    # CORREÇÃO: Usar .strip() e .split() sem argumentos para robustez
    partes = input().strip().split()
    if len(partes) == 2:
        simbolo, letra = partes
        mapa_cifrado[simbolo] = letra

# --- Leitura da Mensagem ---
try:
    l = int(input())
except (ValueError, IndexError):
    l = 0

mensagem_criptografada = [] # Usar uma lista é mais seguro para múltiplas linhas
for _ in range(l):
    mensagem_criptografada.append(input())
# Junta as linhas com o caractere de quebra de linha correto
mensagem_criptografada = "\n".join(mensagem_criptografada)


# --- Bloco de Decodificação e Análise ---
mensagem_decifrada = ""
caracteres_traduzidos = 0
simbolos_unicos = set()
alfabeto = "abcdefghijklmnopqrstuvwxyz"

for char in mensagem_criptografada:
    if char != ' ' and char != '\n': # Ignora espaços e quebras de linha na contagem de símbolos
        simbolos_unicos.add(char)
    
    char_decifrado = mapa_cifrado.get(char, char)
    mensagem_decifrada += char_decifrado
    
    if char in mapa_cifrado:
        caracteres_traduzidos += 1

# --- Contagem de Frequência ---
frequencia_letras = {}
for char in mensagem_decifrada.lower(): 
    if char in alfabeto:
        frequencia_letras[char] = frequencia_letras.get(char, 0) + 1

# --- Bloco de Impressão do Relatório ---
# CORREÇÃO: Removi os títulos para bater com a sua saída esperada
print('Mensagem Decifrada:')
print(mensagem_decifrada)
print('\nEstatísticas:')
print(f"Caracteres traduzidos: {caracteres_traduzidos}")
print(f"Símbolos únicos na mensagem original: {len(simbolos_unicos)}")
print() # Imprime uma linha em branco como separador
print("Frequência de Letras (a-z):")
for letra in alfabeto:
    contagem = frequencia_letras.get(letra, 0)
    if contagem > 0:
        print(f"- {letra}: {contagem}")