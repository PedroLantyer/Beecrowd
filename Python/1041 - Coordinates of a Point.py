x,y = map(float,input().split(" "))
if x == y and y == 0:
    print("Origem")
elif x != 0 and y == 0:
    print("Eixo X")
elif x == 0 and y != 0:
    print("Eixo Y")
else:
    if y > 0:
        if x > 0:
            print("Q1")
        else:
            print("Q2")
    else:
        if x > 0:
            print("Q4")
        else:
            print("Q3")