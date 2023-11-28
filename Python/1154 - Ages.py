if __name__ == "__main__":
    done = False
    sum = 0
    counter = 0
    while done != True:
        x = int(input())
        if x < 0:
            done = True
        else:
            sum += x
            counter += 1
    avg = float((sum/counter))
    print("%.2f" % avg)