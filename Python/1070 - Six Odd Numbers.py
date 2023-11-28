X = int(input())
counter = 0
values = []
for i in range(12):
    if (X+i)%2 == 1:
        counter += 1
        values.append(X+i)
    if (counter == 6):
        break
for i in range(len(values)):
    print(values[i])