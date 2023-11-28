import math
s = str(input())
l1 = s.split(" ")
A,B,C = float(l1[0]), float(l1[1]), float(l1[2])
Delta = ((pow(B,2))-(4*A*C))
if ((A == 0) or (Delta < 0)):
    print("Impossivel calcular")
else:
    X = (((-B)+math.sqrt(Delta))/(2*A))
    Y = (((-B)-math.sqrt(Delta))/(2*A))
    print("R1 = %.5f" % X)
    print("R2 = %.5f" % Y)