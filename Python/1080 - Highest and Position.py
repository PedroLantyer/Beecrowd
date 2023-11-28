l1= []
for i in range(100):
    l1.append(int(input()))
print("%d\n%d" % (max(l1),l1.index(max(l1))+1))