import math

if __name__ == "__main__":
    pi = 3.14159
    radius = float(input())
    volume = (4/3.0) * pi * math.pow(radius,3)
    print("VOLUME = %.3f" % volume)