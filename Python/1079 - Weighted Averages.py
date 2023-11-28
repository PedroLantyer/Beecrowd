n = int(input())
l1 = []
l2 = []
w = [2,3,5]
for i in range(n):
    l1.append(input())
for i in range(len(l1)):
    x = l1[i].split()
    l2.append(x)
for i in range(n):
    avg = 0.0
    for j in range(3):
        avg += (float(l2[i][j])*(w[j]/10))
    else:
        print("%.1f" % avg)