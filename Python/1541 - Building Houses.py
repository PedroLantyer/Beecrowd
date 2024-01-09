import math

def calc_land_size(a,b,percent):
    size = int(math.sqrt(a * b * (100/percent)))
    return size

if __name__ == "__main__":
    done = False
    while done != True:
        l1 = input().split()
        for i in range(len(l1)):
            l1[i] = int(l1[i])
        if (l1[0] == 0):
            break
        print(calc_land_size(l1[0],l1[1],l1[2]))
