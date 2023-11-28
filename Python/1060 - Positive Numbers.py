n1,n2,n3,n4,n5,n6 = float(input()),float(input()),float(input()),float(input()),float(input()),float(input())
l1 = [n1,n2,n3,n4,n5,n6]
counter = 0
for i in range(len(l1)):
    if l1[i] > 0:
        counter += 1
print("%d valores positivos" % counter)