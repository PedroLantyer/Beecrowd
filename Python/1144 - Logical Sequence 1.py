if __name__ == "__main__":
    N = int(input())
    for i in range(1,N+1):
        x,y,z = i,pow(i,2),pow(i,3)
        a,b,c = i,(pow(i,2)+1),(pow(i,3)+1)
        print("%d %d %d\n%d %d %d" % (x,y,z,a,b,c))