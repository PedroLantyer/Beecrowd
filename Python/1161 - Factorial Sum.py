done = False
while done != True:
    try:
        l1 = input().split()
        n1,n2 = int(l1[0]),int(l1[1])
        fact1,fact2= 1,1
        for i in range(1,n1+1):
            fact1 *= i
        for i in range(1,n2+1):
            fact2 *= i
        sum = fact1+fact2
    except:
        done = True
    else:
        print(sum)