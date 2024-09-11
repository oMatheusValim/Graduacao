# Faça um programa para ler o horário (hora, minuto e segundo) de inicio e a duração, em segundos, de uma experiência biológica. O programa deve informar o horário (hora, minuto e segundo) de termino da mesma.

hora = int (input ())
minuto = int (input ())
segundo = int (input ())
duracao = int (input ())
seg_atual = hora*3600+minuto*60+segundo
tempo_atual = seg_atual + duracao
add_hora = (tempo_atual//3600)
add_minuto = (tempo_atual%3600)//60
add_seg = (tempo_atual%3600)%60
print(f'{add_hora} {add_minuto} {add_seg}')