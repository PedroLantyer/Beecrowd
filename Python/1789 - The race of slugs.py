done = False
while done == False:
    try:
        n = int(input())
        arr = [int(x) for x in input().split()]
        arr.sort(reverse=True)
        spd = arr[0]
        if spd < 10:
            print(1)
        elif spd >= 10 and spd < 20:
            print(2)
        elif spd >= 20:
            print(3)
    except:
        break