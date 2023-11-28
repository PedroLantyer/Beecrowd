if __name__ == "__main__":
    S = 1
    exp = 1
    for i in range(2,40,2):
        if i == 2:
            x = pow(2,exp)
        else:
            exp += 1
            x = pow(2,exp)
        S += ((i+1)/x)
    print("%.2f" % S)