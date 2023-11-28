if __name__ == "__main__":
    even,odd = [],[]
    for i in range(15):
        if (len(even) == 5):
            for j in range(len(even)):
                print("par[%d] = %d" % (j,even[j]))
            even.clear()
        if (len(odd) == 5):
            for j in range(len(odd)):
                print("impar[%d] = %d" % (j,odd[j]))
            odd.clear()
        x = int(input())
        if (x%2 == 0):
            even.append(x)
        else:
            odd.append(x)
    if len(odd) != 0:
        for i in range(len(odd)):
            print("impar[%d] = %d" % (i,odd[i]))
    if len(even) != 0:
        for i in range(len(even)):
            print("par[%d] = %d" % (i,even[i]))