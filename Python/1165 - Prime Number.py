if __name__ == "__main__":
    n = int(input())
    for i in range(n):
        x = int(input())
        l1 = []
        for i in range(1,x+1):
            if (x%i == 0):
                l1.append(i)
        if len(l1) == 2:
            print("%d eh primo" % x)
        else:
            print("%d nao eh primo" % x)