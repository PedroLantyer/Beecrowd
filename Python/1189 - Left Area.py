if __name__ == "__main__":
    op = input().strip().upper()
    arr = [[float(input()) for i in range(12)] for j in range(12)]
    sum = 0.00
    start = 4
    end = 1
    for x in range(1,6):
        if end <= 5:
            for y in range(0,end):
                sum += arr[x][y]
        end += 1
    for x in range(6,11):
        if start >= 0:
            for y in range(start,-1,-1):
                sum += arr[x][y]
        start -= 1
    match op:
        case 'S':
            print("%.1f" % sum)
        case 'M':
            avg = sum / 30
            print("%.1f" % avg)
        