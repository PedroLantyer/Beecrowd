from decimal import *
getcontext().prec = 2

inc = 2
for I in range(0,22,inc):
    if (I == 0):
        J = Decimal(1.0)
    elif (I != 1):
        J -= Decimal(2.8)
    K = J
    while (J <= (K+Decimal(2.0))):
        if ((I/10) == int(I/10)):
            if (J == int(J)):
                print("I=%d J=%d"%((I/10),J))
            else:
                print("I=%d J=%.1f"%((I/10),J))
        else:
            if (J == int(J)):
                print("I=%.1f J=%d"%((I/10),J))
            else:
                print("I=%.1f J=%.1f"%((I/10),J))
        J +=Decimal(1.0)