inc = 2
for I in range(1,10,inc):
    if (I == 1):
        J = 7
    elif (I != 1):
        J += ((inc*2)+1)
    K = J
    while (J >= (K-2)):
        print("I=%d J=%d"%(I,J))
        J -=1