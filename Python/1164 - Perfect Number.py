if __name__ == "__main__":
    n = int(input())
    for i in range(n):
        x = int(input())
        sum = 0
        for j in range(1,x):
            if (x%j == 0):
                sum += j
        if (sum == x):
            print("%d eh perfeito" % x)
        else:
            print("%d nao eh perfeito" % x)