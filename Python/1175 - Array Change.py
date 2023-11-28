if __name__ == "__main__":
    l1 = []
    for i in range(20):
        l1.append(int(input()))
    l2 = l1.copy()
    for i in range(len(l1)):
        l2[i] = l1[len(l1)-i-1]
        print("N[%d] = %d" % (i,l2[i]))