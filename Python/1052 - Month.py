num = int(input())
months = ["January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"]
nums = [1,2,3,4,5,6,7,8,9,10,11,12]
for i in range(len(nums)):
    if num == nums[i]:
        print(months[i])