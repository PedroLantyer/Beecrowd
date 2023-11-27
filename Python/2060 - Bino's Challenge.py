def get_count(arr,li):
    for i in range(len(arr)):
        if i == 0:
            count = [0,0,0,0]
        for j in range(len(li)):
            if arr[i] % li[j] == 0:
                count[j] += 1
    return count

def print_arr(count,li):
    for i in range(len(li)):
        print("%d Multiplo(s) de %d" % (count[i],li[i]))

if __name__ == "__main__":
    n = int(input())
    arr = [int(x) for x in input().split()]
    li = [2,3,4,5]
    count = get_count(arr,li)
    print_arr(count,li)