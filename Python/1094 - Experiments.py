n = int(input())
count = [0,0,0]
animais = ["coelhos","ratos","sapos"]
for i in range(n):
    l1 = input().split()
    if (l1[1] == "C"):
        count[0] += int(l1[0])
    elif (l1[1] == "R"):
        count[1] += int(l1[0])
    else:
        count[2] += int(l1[0])
TOTAL = (count[0]+count[1]+count[2])
print("Total: %d cobaias" % TOTAL)
for i in range(len(animais)):
    print("Total de %s: %d" % (animais[i],count[i]))
for i in range(len(animais)):
    percent = ((count[i]*100)/TOTAL)
    print("Percentual de %s: %.2f %%" % (animais[i], percent))