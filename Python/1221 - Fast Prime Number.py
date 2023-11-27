import math

def prime_check(x):
    if x == 2 or x == 3:
        return "Prime"
    elif x <= 1 or x % 2 == 0 or x % 3 == 0:
        return "Not Prime" 
    for i in range(5,int(math.sqrt(x))+1,6):
        if x % i == 0 or x % (i+2) == 0:
            return "Not Prime"
    return "Prime"

if __name__ == "__main__":
    n = int(input())
    for i in range(n):
        res = "Prime"
        x = int(input())
        res = prime_check(x)
        print(res)

#using algorithm o(sqrt(n)) -
#first you get the square root of an integer
#all prime numbers larger than 6 can be represented by 6*k with k being the an integer number
#since