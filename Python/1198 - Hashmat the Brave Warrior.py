if __name__ == "__main__":
    done = False
    while done == False:
        try:
            l1 = [int(x) for x in input().split()]
            l1.sort(reverse=True)
            dif = l1[0]-l1[1]
            print(dif)
        except:
            break