def get_input():
    done = False
    x = int(input())
    while done != True:
        z = int(input())
        if z > x:
            done = True
    return (x,z)

def count(x,z):
    counter = 1
    sum = x
    while sum <= z:
        counter += 1
        sum += x+(1*(counter-1))
    return (counter)

if __name__ == "__main__":
    x,z = get_input()
    print(count(x,z))
