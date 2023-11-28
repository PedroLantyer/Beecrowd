n = int(input())
for i in range(n):
    s = input().split()
    for i in range(len(s)):
        s[i] = int(s[i])
    if (s[1] == 0):
        print("divisao impossivel")
    else:
        res = float((s[0]/s[1]))
        print("%.1f" % res)