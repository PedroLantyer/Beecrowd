done = False
while done != True:
    try:
        n = int(input())
        for i in range(n):
            if i == 0:
                s = ["1"]
            elif i == (n-1):
                s.append("2")
            else:
                s.append("3")
        for i in range(0,n):
            str1 = ""
            if i != 0:
                j = (n-i-1)
                s[i] = "1"
                s[j] = "2"
                if i != j+ 1:
                    s[i-1],s[j+1] = "3","3"
            for k in range(len(s)):
                str1 += s[k]
            print(str1)
    except:
        done = True