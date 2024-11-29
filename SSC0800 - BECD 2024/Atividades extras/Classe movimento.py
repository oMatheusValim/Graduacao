# Crie uma classe chamada Movimento, que representará o movimento de um objeto em movimento retilíneo uniformemente variado (MRUV). Sua classe deverá conter os seguintes métodos:

# calcular_distancia(): Método que calcula a distância percorrida usando a fórmula:
# [ \text = v_0 \times t + \frac{1}{2} \times a \times t^2 ]
# onde:
# ( v_0 ) é a velocidade inicial (em m/s)
# ( a ) é a aceleração (em m/s²)
# ( t ) é o tempo de movimento (em segundos)
# calcular_velocidade_final(): Método que calcula a velocidade final do objeto usando a fórmula:
# velocidade_final = v0 + a * t

# O programa deve receber os seguintes parâmetros como entrada:
# Velocidade inicial em metros por segundo (( v_0 )).
# Aceleração em metros por segundo ao quadrado (( a )).
# Tempo em segundos (( t )).

# O programa deve calcular e exibir:
# A distância percorrida em metros com duas casas decimais.
# A velocidade final em metros por segundo com duas casas decimais.

# Caso algum dos parâmetros seja negativo (velocidade, aceleração ou tempo), o programa deverá exibir a mensagem:
# "Os parâmetros não podem ser negativos."

# Exemplo de Entrada:
# 5
# 2
# 10

# Exemplo de Saída:
# Distância percorrida: 150.00 metros  
# Velocidade final: 25.00 m/s

class Movimento(object):
    def __init__(self, velo, tempo, aceleracao):
        self.velo_in = velo
        self.tempo = tempo
        self.aceleracao = aceleracao
    
    def calcular_distancia(self):
        return  self.velo_in * self.tempo + (self.aceleracao * self.tempo**2) / 2
    
    def calcular_velocidade_final(self):
        return self.velo_in + self.aceleracao * self.tempo
    
    def exibir_detalhes(self):
        return (
            f'Distância percorrida: {self.calcular_distancia():.2f} metros\nVelocidade final: {self.calcular_velocidade_final():.2f} m/s'
        )
    
velo = float(input())
aceleracao = float(input())
tempo = float(input())
if velo < 0 or aceleracao < 0 or tempo < 0:
    print('Os parâmetros não podem ser negativos.')
else:
    result = Movimento(velo, tempo, aceleracao)
    print(result.exibir_detalhes())