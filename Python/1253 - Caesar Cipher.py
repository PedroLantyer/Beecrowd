if __name__ == "__main__":
    n = int(input())
    for i in range(n):
        str1 = input()
        inc = int(input())
        s = ""
        for i in range(len(str1)):
            x = ord(str1[i])-inc
            if x < 65:
                x += 26
            s += chr(x)
        else:
            print(s)