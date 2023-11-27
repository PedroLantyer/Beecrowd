count = 0
tea = int((input()))
l1 = input().split()
for i in range(len(l1)):
    if int(l1[i]) == tea:
        count += 1
print(count)