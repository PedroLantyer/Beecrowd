if __name__ == "__main__":
    line = int(input())
    ch = input().strip()
    arr = [[float(input()) for i in range(12)] for j in range(12)]
    sum = 0.00
    for i in range(12):
        sum += arr[line][i]
    if ch == "S":
        print("%.1f" % sum)
    if ch == "M":
        avg = float(sum/12)
        print("%.1f" % avg)
    