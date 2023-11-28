if __name__ == "__main__":
    l1 = []
    for i in range(10):
        l1.append(int(input()))
        if l1[i] <= 0:
            l1[i] = 1
    for i in range(len(l1)):
        print("X[%d] = %d" % (i,l1[i]))
        