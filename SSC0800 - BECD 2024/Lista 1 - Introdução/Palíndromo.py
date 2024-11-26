# Desenvolva um código em Python que leia uma string e determine se a string é um palíndromo (lê-se da mesma forma de trás para frente, ignorando espaços e pontuações).

# Entrada
# A entrada será uma única string:
# A man a plan a canal Panama

# Saída
# A saída será "Sim" se a string for um palíndromo e "Não" caso contrário.

frase = input()
frase_mod1 = frase.lower()
frase_mod2 = frase_mod1.replace(" ", "")
frase_invert = frase_mod2[::-1]
if frase_mod2 == frase_invert: 
    print("Sim")
else: 
    print("Não")
