N = int(input())
counter = 0
list1 = []
print(N)
while N >= 100:
    counter += 1
    N -=100
else:
    print(str(counter) + " nota(s) de R$ 100,00")
counter = 0
while N >= 50:
    counter += 1
    N -=50
else:
    print(str(counter) + " nota(s) de R$ 50,00")
counter = 0
while N >= 20:
    counter += 1
    N -=20
else:
    print(str(counter) + " nota(s) de R$ 20,00")
counter = 0
while N >= 10:
    counter += 1
    N -=10
else:
    print(str(counter) + " nota(s) de R$ 10,00")
counter = 0
while N >= 5:
    counter += 1
    N -=5
else:
    print(str(counter) + " nota(s) de R$ 5,00")
counter = 0
while N >= 2:
    counter += 1
    N -=2
else:
    print(str(counter) + " nota(s) de R$ 2,00")
counter = 0
while N >= 1:
    counter += 1
    N -=1
else:
    print(str(counter) + " nota(s) de R$ 1,00")