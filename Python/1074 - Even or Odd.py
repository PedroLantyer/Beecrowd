N = int(input())
l1 = []
for i in range(N):
    l1.append(int(input()))
for i in range(len(l1)):
    if (l1[i] == 0):
        print("NULL")
    else:
        s = ""
        if (l1[i]%2 == 0):
            s += "EVEN "
        else:
            s += "ODD "
        if (l1[i] > 0):
            s += "POSITIVE"
        else:
            s += "NEGATIVE"
        print(s)