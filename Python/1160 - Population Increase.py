if __name__ == "__main__":
    n = int(input())
    for i in range(n):
        l1 = input().split()
        PA,PB,G1,G2 = int(l1[0]),int(l1[1]),float(l1[2]),float(l1[3])
        years = 0
        while PA <= PB:
            PB = int(PB*(1+(G2/100)))
            PA = int(PA*(1+(G1/100)))
            years += 1
            if years > 100:
                print("Mais de 1 seculo.")
                break
        else:
            print("%d anos."% years)