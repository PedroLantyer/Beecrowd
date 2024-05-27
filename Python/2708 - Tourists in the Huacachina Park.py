def getInputArr():
    inputs = [0,0]
    while (True):
        inputArr = input().split()
        if inputArr[0] == "ABEND":
            break
        if inputArr[0] == "SALIDA":
            inputs[0] += int(inputArr[1])
            inputs[1] += 1
        if inputArr[0] == "VUELTA":
            inputs[0] -= int(inputArr[1])
            inputs[1] -= 1
    return inputs

def printArr(arr):
    for i in range(len(arr)):
        print(arr[i])

if __name__ == "__main__":
    inputs = getInputArr()
    printArr(inputs)
