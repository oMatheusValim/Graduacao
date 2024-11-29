# Crie uma classe para números complexos, ou seja, teremos um objeto x com parte real e imaginária: x_real e x_imag
 
# Implemente as operações a seguir como métodos da classe complexo a ser criada: +, -, /, *, abs, ==. 

# Considere a seguinte representação para complexos x = (x_real) + (x_imag)i nas operações detalhadas abaixo: 
#     xy= (x_real * y_real - x_imag*y_imag) + ( x_imag*y_real + x_real*y_imag)i 
#     x/y= ( (x_real*y_real + x_imag*y_imag) / r ) + ( (x_imag*y_real - x_real*y_imag) / r )i, onde r= y_real^2 + y_imag^2 
#     abs(x) = sqrt(x_real^2 + x_imag^2)
#     x==y: Se (x_real==y_real) E (x_imag==y_imag), verdeiro; caso contrário, falso.
     
# Uma lista de operações será repassada, seguida pelo valor de dois números 

# ENTRADA
# == abs +
# 1,2
# 3,4

# SAÍDA
# ==:False
# abs:2.24
# abs:5.00
# +:4.00+6.00i

class Complexos:
    def __init__(self, x_real, x_imag, y_real, y_imag):
        self.x_real = x_real
        self.x_imag = x_imag
        self.y_real = y_real
        self.y_imag = y_imag

    def soma(self):
        soma_real = self.x_real + self.y_real
        soma_imag = self.x_imag + self.y_imag
        return f"{soma_real:.2f}{'+' if soma_imag >= 0 else ''}{soma_imag:.2f}i"

    def sub(self):
        sub_real = self.x_real - self.y_real
        sub_imag = self.x_imag - self.y_imag
        return f"{sub_real:.2f}{'+' if sub_imag >= 0 else ''}{sub_imag:.2f}i"

    def mult(self):
        mult_real = self.x_real * self.y_real - self.x_imag * self.y_imag
        mult_imag = self.x_imag * self.y_real + self.x_real * self.y_imag
        return f"{mult_real:.2f}{'+' if mult_imag >= 0 else ''}{mult_imag:.2f}i"

    def div(self):
        r = self.y_real**2 + self.y_imag**2
        if r == 0:
            return "Erro: divisão por zero"
        div_real = (self.x_real * self.y_real + self.x_imag * self.y_imag) / r
        div_imag = (self.x_imag * self.y_real - self.x_real * self.y_imag) / r
        return f"{div_real:.2f}{'+' if div_imag >= 0 else ''}{div_imag:.2f}i"

    def raiz(self):
        raiz_x = (self.x_real**2 + self.x_imag**2)**0.5
        raiz_y = (self.y_real**2 + self.y_imag**2)**0.5
        return f"abs:{raiz_x:.2f}\nabs:{raiz_y:.2f}"

    def igual(self):
        return self.x_real == self.y_real and self.x_imag == self.y_imag

operacoes = input().split()

numA = input().split(',')
x_real, x_imag = float(numA[0]), float(numA[1])
numB = input().split(',')
y_real, y_imag = float(numB[0]), float(numB[1])

result = Complexos(x_real, x_imag, y_real, y_imag)

for op in operacoes:
    if op == '+':
        print(f'+:{result.soma()}')
    elif op == '-':
        print(f'-:{result.sub()}')
    elif op == '*':
        print(f'*:{result.mult()}')
    elif op == '/':
        print(f'/:{result.div()}')
    elif op == 'abs':
        print(result.raiz())
    elif op == '==':
        print(f'==:{result.igual()}')
