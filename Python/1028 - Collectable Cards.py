def gdc(a,b):
    ans = a % b
    if ans != 0:
        while a % ans != 0 or b % ans != 0:
            a = b
            b = ans
            ans = a % b
    else:
        ans = b
    return ans

for i in range(int(input())):
    n1,n2 = map(int,input().split())
    if n1 == n2:
        print(n1)
    else:
        if n1 > n2:
            large = n1
            small = n2
        else:
            large = n2
            small = n1
        stack = gdc(large,small)
    print(stack)
