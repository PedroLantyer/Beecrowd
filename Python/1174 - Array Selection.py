if __name__ == "__main__":
    l1 = []
    for i in range(100):
        l1.append(float(input()))
    for i in range(len(l1)):
        if l1[i] <= 10:
            print("A[%d] = %.1f" % (i,l1[i]))