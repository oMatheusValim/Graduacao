# Criar um programa em python que identifique se a senha é válida. O programa deve identificar os caracteres da senha. A senha deverá ter pelo menos 1 letra maiúscula, 1 letra minúscula, 1 caracter não alfanumérico (@,#,etc.) e 1 dígito. A senha deve ter pelo menos 8 caracteres. A saída deverá ser "Valida" ou "Invalida" (sem acento) de acordo com a entrada recebida. 

# Entrada 
# Bm@Ct1018

# Saída 
# Valida 

# Entrada 
# DP!#1018

# Saída 
# Invalida

def veri(n):
    caracteres = ["!", "@", "#", "%", "?", "+", "-", "/", "$", "&"]
    veri_maxi = False
    veri_mini = False
    veri_num = False
    veri_cara = False
    for i in n:
        if i.isupper():
            veri_maxi = True
        elif i.islower():
            veri_mini = True
        elif i.isdigit():
            veri_num = True
        elif i in caracteres:
            veri_cara = True
    if veri_maxi and veri_cara and veri_mini and veri_num is True:
        return 1
    else:
        return 0
    
senha = input().strip()
result = veri(senha)
if result == 1:
    print("Valida")
else:
    print('Invalida') 