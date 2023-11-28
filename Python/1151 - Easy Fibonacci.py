if __name__ == "__main__":
    n = int(input())
    s = ""
    l1 = []
    while len(l1) < n:
        if len(l1) == 0:
            l1.extend([0,1])
        else:
            x = l1[len(l1)-2] + l1[len(l1)-1]
            l1.append(x)
    for i in range(len(l1)):
        if i != (len(l1)-1):
            s += str(l1[i]) + " "
        else:
            s += str(l1[i])
    print(s)