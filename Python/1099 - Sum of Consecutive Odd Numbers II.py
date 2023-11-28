n = int(input())
sum = []
for i in range(n):
    sum.append(0)
    s = input().split()
    if (int(s[0]) < int(s[1])):
        beg = int(s[0])+1
        end = int(s[1])
    elif (int(s[0]) == int(s[1])):
        beg = 0
        end = 0
    else:
        beg = int(s[1])+1
        end = int(s[0])
    for j in range(beg,end):
        if (j%2==1):
            sum[i] += j
for i in range(len(sum)):
    print(sum[i])