if __name__ == "__main__":
    done = False
    res = [0,0,0]
    while done != True:
        n = int(input())
        match n:
            case 1:
                res[0] += 1
                done = False
            case 2:
                res[1] += 1
                done = False
            case 3:
                res[2] += 1
                done = False
            case 4:
                done = True
            case _:
                done = False
    print("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d" % (res[0],res[1],res[2]))