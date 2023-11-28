A,B,C = map(float,input().split(" "))
if (A+B>C) and (B+C>A) and (C+A>B):
    Perimetro = A+B+C
    print("Perimetro = %.1f" % Perimetro)
else:
    Area = ((A+B)*C)/2
    print("Area = %.1f" % Area)