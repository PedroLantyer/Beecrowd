import math

def get_point():
    list = input().split() #GET X and Y coordinates
    point = [float(num) for num in list]
    return point

def get_distance(x1, y1, x2, y2):
    x_dif = math.pow(p2[0]-p1[0],2)
    y_dif = math.pow(p2[1]-p1[1],2)
    distance = math.sqrt((x_dif + y_dif))
    return distance

if __name__ == "__main__":
    p1, p2 = get_point(), get_point()
    distance = get_distance(p1[0], p1[1], p2[0], p1[1])
    print("%.4f" % distance)

    #DISTANCE: √((x2-x1)² + (y2-y1)²)