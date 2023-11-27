def DoT(v,t):
    res = v * t
    return res
    
if __name__ == "__main__":
    done = False
    while done == False:
        try:
            v,t = map(int,input().split())
            if v == 0 or t == 0:
                print(0)
            else:
                res = DoT(v,t)
                print(res*2)
        except:
            done = True