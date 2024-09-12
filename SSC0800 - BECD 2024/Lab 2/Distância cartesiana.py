import math
x1 = float( input().strip())
y1  = float( input().strip())
x2 = float( input().strip())
y2 =  float( input().strip())
distância = math.sqrt((x1-x2)**2+(y1-y2)**2)
print('%.6f' %(distância))
