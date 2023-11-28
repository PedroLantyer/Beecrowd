def fib(x):
    l1 = [0,1]
    if (x < 2):
        if (x == 1):
            return l1[1]
        elif (x == 0):
            return l1[0]
    else:
        for i in range(2,x+1):
            l1.append((l1[i-2]+l1[i-1]))
    return (l1[len(l1)-1])

if __name__ == "__main__":
    n = int(input())
    for i in range(n):
        x = int(input())
        num = fib(x)
        print("Fib(%d) = %d" %(x,num))
        