done = False
while done != True:
    try:
        n = int(input())
    except:
        done = True
    else:
        if n == 0:
            print("vai ter copa!")
        else:
            print("vai ter duas!")