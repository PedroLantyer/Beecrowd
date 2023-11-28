if __name__ == "__main__":
    n = int(input())
    for i in range (n):
        li = input().split(" ")
        s1,s2 = li[0],li[1]
        l1 = [x for x in s1]
        l2 = [y for y in s2]
        s = ""
        if len(l1) < len(l2):
            min_len,max_len = len(l1),len(l2)
            for y in range(max_len):
                if y < min_len:
                    s += l1[y]
                    s += l2[y]
                else:
                    s += l2[y]
        else:
            min_len,max_len = len(l2),len(l1)
            for y in range(max_len):
                if len(l1) != len(l2):
                    if y < min_len:
                        s += l1[y]
                        s += l2[y]
                    else:                    
                        s += l1[y]
                else:
                    s += l1[y]
                    s += l2[y]
        print(s)
    