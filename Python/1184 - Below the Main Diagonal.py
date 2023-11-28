if __name__ == "__main__":
    ch = input().strip()
    arr = [[float(input()) for i in range(12)] for j in range(12)]
    sum = 0.00
    counter = 0
    for i in range(12):
        for j in range(12):
            if i>j:
                sum += arr[i][j]
                counter+=1
    if ch == "S":
        print("%.1f" % sum)
    if ch == "M":
        avg = float(sum/counter)
        print("%.1f" % avg)