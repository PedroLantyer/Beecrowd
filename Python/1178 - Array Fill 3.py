if __name__ == "__main__":
    l1 = list(range(100))
    for i in range(0,len(l1)):
        if i == 0:
            l1[i] = float(input())
            print("N[%d] = %.4f" % (i,l1[i]))
        else:
            l1[i] = float((l1[i-1])/2)
            print("N[%d] = %.4f" % (i,l1[i]))
