if __name__ == "__main__":
    n = int(input())
    for i in range(n):
        l1 = input().split(" ")
        x,y = int(l1[0]), int(l1[1])
        counter,sum = 0,0
        while counter < y:
            if (x%2 == 1):
                sum += x
                x += 1
                counter += 1
            else:
                x += 1
        print(sum)