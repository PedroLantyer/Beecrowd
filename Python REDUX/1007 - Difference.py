if __name__ == "__main__":
    nums = []
    for i in range(4): #GET THE VALUES OF A, B, C and D
        nums.append(int(input()))

    difference  = (nums[0]*nums[1])-(nums[2]*nums[3])
    print("DIFERENCA = %d" % difference)