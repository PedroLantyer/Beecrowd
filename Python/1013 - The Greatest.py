s = input()
list1 = s.split(" ")
i = 0
for i in range(len(list1)):
    list1[i] = int(list1[i])
list1.sort(reverse=True)
print(str(list1[0]) + " eh o maior")