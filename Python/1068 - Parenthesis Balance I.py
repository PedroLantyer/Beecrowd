done = False
while done != True:
    try:
        s = input().strip()
        count = [0,0]
        for i in range(len(s)):
            if s[i] == "(":
                count[0] += 1
            elif s[i] == ")":
                count[1] += 1
            if count[1] > count[0]:
                break
        if count[0] == count[1]:
            print("correct")
        else:
            print("incorrect")
    except:
        done = True