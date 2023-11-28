if __name__ == "__main__":
    op = input().strip().upper()
    arr = [[float(input()) for i in range (12)] for j in range(12)]
    sum = 0.00
    end = 7
    start = 1
    for x in range(11,6,-1):
        if start <= 5:
            for y in range(start,6):
                sum += arr[x][y]
        start += 1
    for x in range(7,12):
        if x > 7: 
            end += 1
        if end <= 11:
            for y in range(6,end):
                sum += arr[x][y]
    match op:
        case 'S':
            print("%.1f" % sum)
        case 'M':
            avg = sum / 30
            print("%.1f" % avg)