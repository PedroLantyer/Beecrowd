A,B,C = map(int,input().split(" "))
l1 = [A, B, C]
l2 = sorted(l1)
i = 0
for i in range(len(l2)):
    print(l2[i])
print("")
i = 0
for i in range(len(l1)):
    print(l1[i])