if __name__ == "__main__":
    n = int(input())
    for i in range(n):
        x = input()
        LED = 0
        l1 = [x for x in x]
        for i in range(len(l1)):
            match l1[i]:
                case "1":
                    LED+=2
                case "2" | "3" | "5":
                    LED+=5
                case "4":
                    LED+=4
                
                case "6" | "9" | "0":
                    LED+=6
                case "7":
                    LED+=3
                case "8":
                    LED+=7
                case _:
                    pass
        else:
            print("%d leds" % LED)