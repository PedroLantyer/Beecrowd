def getMaxBottles(bought, required):
    x = (bought/required)
    return int(x)

def convertToIntArr(arr):
    intArr = []
    for i in range(len(arr)):
        intArr.append(int(arr[i]))
    return intArr

def getBottleCount(n):
    bottleCountArr = []
    for i in range(n):
        inputArr = input().split()
        inputArr = convertToIntArr(inputArr)
        maxBottles = getMaxBottles(inputArr[0], inputArr[1])
        if (maxBottles >= 0):
            remainder = (inputArr[0]-(maxBottles*inputArr[1]))
            total = remainder+(maxBottles)
            bottleCountArr.append(total)
        else:
            bottleCountArr.append(inputArr[0])
    return bottleCountArr

def printArr(arr):
    for i in range(len(arr)):
        print(arr[i])

if __name__ == "__main__":
    testCases = int(input())
    bottleCountArr = getBottleCount(testCases)
    printArr(bottleCountArr)