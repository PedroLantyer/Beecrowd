import math
l1 = input().split()
i = 0
for i in range(len(l1)):
    l1[i] = float(l1[i])
l1.sort(reverse= True)
A,B,C = l1[0], l1[1], l1[2]
if A >= (B + C):
    print("NAO FORMA TRIANGULO")
elif pow(A,2) == (pow(B,2) + pow(C,2)):
    print("TRIANGULO RETANGULO")
elif pow(A,2) > (pow(B,2) + pow(C,2)):
    print("TRIANGULO OBTUSANGULO")
elif pow(A,2) < (pow(B,2) + pow(C,2)):
    print("TRIANGULO ACUTANGULO")
if A == B == C:
    print("TRIANGULO EQUILATERO")
elif (A == B and A != C) or (A == C and A != B) or (B == C and C != A):
    print("TRIANGULO ISOSCELES")