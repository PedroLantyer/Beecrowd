if __name__ == "__main__":
    l1 = input().split(" ")
    x,y = int(l1[0]),int(l1[1])
    l2 = []
    for i in range(1,x+1):
        l2.append(i)
    for i in range(0,y,x):
        s = ""
        for j in range(len(l2)):
            if i != 0:
                l2[j] = (l2[j]+(x))
            if l2[j] < y:
                if j != x-1:
                    s += str(l2[j]) + " "
                else:
                    s += str(l2[j])
            elif l2[j] == y:
                s += str(l2[j])
        else:
            print(s)