N = int(input())
l1 = []
ins, out = 0,0
for i in range(N):
    l1.append(int(input()))
    if (l1[i] >= 10) and (l1[i] <= 20):
        ins +=1
    else:
        out +=1
print("%d in\n%d out" % (ins,out))