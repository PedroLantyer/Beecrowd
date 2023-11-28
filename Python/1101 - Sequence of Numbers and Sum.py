stop = False
while (stop == False):
    s = input().split()
    for i in range(len(s)):
        s[i] = int(s[i])
    if ((s[0]) <= 0) or ((s[1]) <= 0):
        stop = True
    else:
        if ((s[0]) < (s[1])):
            beg = (s[0])
            end = (s[1])+1
        elif ((s[0]) == (s[1])):
            beg = s[0]
            end = beg+1
        else:
            beg = s[1]
            end = s[0]+1
        sum = 0
        l1 = []
        for i in range(beg,end):
            l1.append(i)
            sum += i
        out = ""
        for i in range(len(l1)):
            out += (str(l1[i])+" ")
        print("%sSum=%d" % (out,sum))