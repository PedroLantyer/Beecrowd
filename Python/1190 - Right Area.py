if __name__ == "__main__":
    op = input().strip().upper()
    start = 7
    end = 10
    sum = 0.00
    arr = [[float(input()) for i in range(12)] for j in range(12)]
    for x in range(1,6):
        if end >= 6:
            for y in range(11,end,-1):
                sum += arr[x][y]
        end -= 1
    for x in range(6,11):
        if start <= 11:
            for y in range(start,12):
                sum += arr[x][y]
        start += 1
    match op:
        case 'S':
            print("%.1f" % sum)
        case 'M':
            avg = sum / 30
            print("%.1f" % avg)