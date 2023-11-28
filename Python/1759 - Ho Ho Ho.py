def main():
    n = int(input())
    s = ""
    for i in range (n):
        if i != (n-1):
            s += "Ho "
        else:
            s += "Ho!"
    print(s)

main()

#must define main function, problem seems to be bugged