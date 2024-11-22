# Considere a seguinte equação do pêndulo simples:

# d²θ/dt² = - sen(θ)
# θ(0) = θ0
# ω(0) = 0

# Resolva a equação acima utilizando o método de Euler-Richardson, iterando M = 1000 passos de tempo com espaçamento δt = 0.01. Com os valores obtidos de θ, implemente o cálculo aproximado do período do pêndulo da seguinte forma:

# Identifique a primeira vez que o pêndulo cruzar a reta θ = 0 através da mudança de sinal nos valores de θ. Suponha que a mudança de sinal ocorra entre as posições θi e θi+1 nos tempos ti e ti+1, respectivamente;
# Faça uma interpolação linear entre os pontos (ti, θi) e (ti+1, θi+1) para obter o tempo t quando θ = 0;
# O tempo obtido corresponde a 1/4 do período

# ENTRADA:
# Posição inicial θ0 em radianos 

# SAÍDA:
# Período truncado com quatro casas decimais 

# Sample input:
# 1.047197

# Sample output:
# 6.7429

import math

def calcular_periodo_pendulo(theta0):
    dt = 0.01
    M = 1000
    theta = theta0
    omega = 0
    
    t = 0
    cruzou_zero = False
    tempo_cruzamento = 0
    
    for i in range(M):
        omega_meio = omega - 0.5 * dt * math.sin(theta)
        theta_meio = theta + 0.5 * dt * omega
        omega += -dt * math.sin(theta_meio)
        theta += dt * omega_meio
        t += dt
        
        if not cruzou_zero and theta * (theta - dt * omega_meio) < 0:
            t_anterior = t - dt
            theta_anterior = theta - dt * omega_meio
            tempo_cruzamento = t_anterior - theta_anterior * dt / (theta - theta_anterior)
            cruzou_zero = True
            break
    
    periodo = 4 * tempo_cruzamento
    return round(periodo, 4)

theta0 = float(input())
print(calcular_periodo_pendulo(theta0))
