if __name__ == "__main__":
    l1 = []
    for i in range(2):
        l1.append(int(input()))
    l1.sort()
    x,y = l1[0],l1[1]
    sum = 0
    for i in range(x,y+1):
        if (i%13 != 0):
            sum += i
    print(sum)