n = int(input())
for i in range(n):
    count = 0
    x = float(input())
    while x > 1:
        x /= 2
        count += 1
    else:
        print("%d dias" % count)