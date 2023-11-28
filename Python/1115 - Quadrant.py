stop = False
while (stop != True):
    s = input().split()
    for i in range(len(s)):
        s[i] = int(s[i])
    if (s[0] == 0) or (s[1] == 0):
        stop = True
    else:
        if (s[0] > 0):
            if (s[1] > 0):
                print("primeiro")
            else:
                print("quarto")
        else:
            if (s[1] > 0):
                print("segundo")
            else:
                print("terceiro")