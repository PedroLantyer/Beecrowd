if __name__ == "__main__":
    for i in range(int(input())):
        x,y = map(str,input().split())
        if len(x) != len(y):
            dif = len(x)-len(y)
            x = x[(dif):len(x)]
        elif len(x) < len(y):
            print("nao encaixa")
        if x == y:
            print("encaixa")
        else:
            print("nao encaixa")