if __name__ == "__main__":
    n = int(input())
    for i in range(n):
        s = input().strip()
        n1 = ['o','n','e']
        n2 = ['t','w','o']
        m1,m2 = 0,0
        if len(s) == 5:
            print(3)
        else:
            for i in range(len(s)):
                if s[i] == n1[i]:
                    m1 += 1
                elif s[i] == n2[i]:
                    m2 += 1
            else:
                if m1 > m2:
                    print(1)
                elif m2 > m1:
                    print(2)