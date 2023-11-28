X,Y = int(input()), int(input())
odd_values = []
if X < Y:
    start = X+1
    end = Y-1
else:
    start = Y+1
    end = X-1
while start <= end:
    if(abs(start)%2 == 1):
        odd_values.append(start)
    start += 1
sum = 0
for i in range(len(odd_values)):
    sum = sum + odd_values[i]
print(sum)