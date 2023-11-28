if __name__ == "__main__":
    op = input().strip()
    arr = [[float(input()) for i in range(12)] for j in range (12)]
    sum = 0.00
    end = 7
    for x in range(0,5):
        for y in range(1+x,6):
            sum += arr[x][y]
    for x in range(4,-1,-1):
        if x < 4:
            end += 1
        if end <= 11:
            for y in range(6,end):
                sum += arr[x][y]
    if op == 'S':
        print("%.1f" %sum)
    if op == 'M':
        avg = sum / 30
        print("%.1f" % avg)