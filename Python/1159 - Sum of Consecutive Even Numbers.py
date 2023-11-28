if __name__ == "__main__":
    done = False
    while done != True:
        x = int(input())
        sum,counter = 0,0
        if x == 0:
            done = True
        else:
            while counter < 5:
                if x % 2 == 0:
                    sum += x
                    x += 2
                    counter += 1
                else:
                    x += 1
            print(sum)