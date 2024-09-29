# # Crie uma função recursiva que receba uma string e uma substring, e retorne o número de vezes que a substring aparece na string principal.

# # Entrada
# # banana ana

# # Saída
# # 1

def contar_substring(string, substring, index=0):
    if index > len(string) - len(substring):
        return 0
    if string[index:index + len(substring)] == substring:
        return 1 + contar_substring(string, substring, index + 1)
    return contar_substring(string, substring, index + 1)

entrada = input().split()
string = entrada[0]
substring = entrada[1]
contagem = contar_substring(string, substring)
print(contagem)


# FEITO