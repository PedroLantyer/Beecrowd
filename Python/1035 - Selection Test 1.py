s = str(input())
l1 = s.split(" ")
A,B,C,D = int(l1[0]), int(l1[1]), int(l1[2]), int(l1[3])
if ((B>C) and (D>A)) and ((C+D)>(A+B)) and (C>0 and D>0) and (A%2==0):
    print("Valores aceitos")
else:
    print("Valores nao aceitos")