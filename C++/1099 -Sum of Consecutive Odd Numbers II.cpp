#include <iostream>
#include <vector>

std::vector<int> odd_between(std::vector<int> nums,int high,int low)
{
    int sum = 0;
    for(int i = (low+1); i < high; i++)
    {
        if (i%2 != 0)
        {
            sum += i;
        }
    }
    nums.push_back(sum);
    return nums;
}

void print_results(std::vector<int> nums)
{
    int length;
    length = nums.size();
    for (int i = 0; i < length; i++)
    {
        std::cout << nums[i] << std::endl;
    }
}

int main()
{
    int n,x,y;
    std::cin >> n;
    std::vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        std::cin >> x >> y;
        if (x > y)
        {
            nums = odd_between(nums,x,y);
        }
        else if (x < y)
        {
            nums = odd_between(nums,y,x);
        }
        else
        {
            nums.push_back(0);
        }
    }
    print_results(nums);
    return 0;
}