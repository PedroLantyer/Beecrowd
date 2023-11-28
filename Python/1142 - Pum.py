if __name__ == "__main__":
    n = int(input())
    l1 = [1,2,3]
    for i in range(n):
        x,y,z = (l1[0]+(4*i)),(l1[1]+(4*i)),(l1[2]+(4*i))
        print ("%d %d %d PUM" %(x,y,z))