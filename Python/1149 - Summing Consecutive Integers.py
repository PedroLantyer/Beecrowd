if __name__ == "__main__":
    l1 = input().split(" ")
    x = int(l1[0])
    done = False
    while done != True:
        for i in range(1,len(l1)):
            if int(l1[i]) > 0:
                y = int(l1[i])
                done = True
    sum = 0
    for i in range(y):
        sum += (x+i)
    else:
        print(sum)