if __name__ == "__main__":
    useless = int(input())
    l1 = input().split()
    for i in range(len(l1)):
        l1[i] = int(l1[i])
    min_val = min(l1)
    min_ind = l1.index(min_val)
    print("Menor valor: %d\nPosicao: %d" % (min_val,min_ind))