import math
N = int(input())
for i in range(N+1):
    if (i != 0) and (i%2 == 0):
        squared = pow(i,2)
        print("%d^2 = %d" % (i,squared))