if __name__ == "__main__":
    A,B = map(int,input().split())
    sum = 0
    for i in range(A,B+1,1):
        sum += i
    print(sum)