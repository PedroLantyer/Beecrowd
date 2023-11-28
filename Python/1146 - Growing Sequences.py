if __name__ == "__main__":
    done = False
    while done != True:
        n = int(input())
        s = ""
        if n == 0:
            done = True
        else:
            for i in range(1,n+1):
                if i != n:
                    s += str(i)+" "
                else:
                    s += str(i)
            else:
                print(s)