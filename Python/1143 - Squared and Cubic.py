if __name__ == "__main__":
    n = int(input())
    for i in range(1,n+1):
        x,y,z = i,pow(i,2),pow(i,3)
        print("%d %d %d" % (x,y,z))