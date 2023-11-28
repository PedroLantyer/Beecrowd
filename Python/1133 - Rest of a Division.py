if __name__ == "__main__":
    l1 = []
    for i in range(2):
        l1.append(int(input()))
    l1.sort()
    x,y = l1[0],l1[1]
    for i in range(x+1,y):
        if (i%5==2) or (i%5==3):
            print(i)