if __name__ == "__main__":
    A,B = map(int,input().split())
    if A == B:
        print(A)
    else:
        sum = (B*(B+1)/2) - (A*(A-1)/2)
        print("%d" % sum)