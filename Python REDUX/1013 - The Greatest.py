if __name__ == "__main__":
    nums = input().split()
    nums = [int(num) for num in nums]
    nums.sort(reverse=True)
    print("%d eh o maior" % nums[0])