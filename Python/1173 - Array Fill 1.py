if __name__ == "__main__":
    n = int(input())
    l1 = []
    for i in range(10):
        if i == 0:
            l1.append(n)
        else:
            l1.append((l1[i-1]*2))
    for i in range(len(l1)):
        print("N[%d] = %d" % (i,l1[i]))