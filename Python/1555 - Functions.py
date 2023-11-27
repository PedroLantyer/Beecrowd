def func_r(x,y):
    r = pow((3*x),2) + pow(y,2)
    return r

def func_b(x,y):
    b = (2*(pow(x,2))) + pow((5*y),2)
    return b

def func_c(x,y):
    c = (-100*x) + pow(y,3)
    return c

def compare_values(r,b,c):
    if r > b and r > c:
        return "Rafael"
    elif b > r and b > c:
        return "Beto"
    elif c > r and c > b:
        return "Carlos"
    else:
        return "0"

if __name__ == "__main__":
    n = int(input())
    for i in range(n):
        x,y = map(int,input().split())
        r,b,c = func_r(x,y),func_b(x,y),func_c(x,y)
        winner = compare_values(r,b,c)
        if winner != "0":
            print("%s ganhou" % (winner))