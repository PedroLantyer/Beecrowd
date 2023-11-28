if __name__ == "__main__":
    n = int(input())
    l1 = []
    while (len(l1) < 1000):
        for j in range(n):
            if len(l1) < 1000:
                l1.append(j)
                print("N[%d] = %d" % ((len(l1)-1),l1[len(l1)-1]))