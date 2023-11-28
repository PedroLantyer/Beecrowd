stop = False
while (stop != True):
    s = input().split()
    for i in range(len(s)):
        s[i] = int(s[i])
    if (s[0] == s[1]):
        stop = True
    else:
        if(s[0] > s[1]):
            print("Decrescente")
        else:
            print("Crescente")