import math
s1 = input()
l1 = s1.split(" ")
s2 = input()
l2 = s2.split(" ")
A = pow((float(l2[0]) - float(l1[0])),2)
B = pow((float(l2[1]) - float(l1[1])),2)
DIS = math.sqrt(A+B)
print("%.4f" % DIS)