import math

def get_media(n):
    if n%2 == 0:
        media = int(n/2)
    else:
        media = math.ceil(n/2)
    return media

def get_array(n,media):
    arr = [[1 for i in range(n)] for j in range(n)]
    #build the first half of the array
    for x in range(0,media):
        min_num = 1
        max_num = x+1
        z = 1
        if n%2 != 0:
            r_index = media-2
        else:
            r_index = media-1
        for y in range(media):
            if x == 0:
                arr[x][y] == 1
            else:
                arr[x][y] = min_num
                if min_num < x+1:
                    min_num += 1
        for y in range(media,n):
            if y == n-1:
                arr[x][y] = 1
            else:
                arr[x][y] = arr[x][r_index]
                if (arr[x][r_index] > 1) and (y != n-1):
                    r_index -= 1
    #build the second half of the array
    if n%2 == 1:
        r_index = media-2
    else:
        r_index = media-1
    for x in range(media,n):
        if x != media:
            r_index -= 1
        for y in range(n):
            arr[x][y] = arr[r_index][y]
    return arr

def print_array(arr,n):
    for x in range(n):
        s = "  "
        for y in range(n):
            if y != n-1:
                if arr[x][y] >= 9:
                    if (arr[x][y+1] == 10 or arr[x][y] >= 10) and (arr[x][y+1] != 9):
                        s += str(arr[x][y]) + "  "
                    else:
                        s += str(arr[x][y]) + "   "
                else:
                    s += str(arr[x][y]) + "   "
            else:
                s += str(arr[x][y])
        else:
            print(s)
    else:
        print()

if __name__ == "__main__":
    done = False
    while done != True:
        n = int(input())
        if n == 0:
            done = True
        else:
            media = get_media(n)
            arr = get_array(n,media)
            print_array(arr,n)