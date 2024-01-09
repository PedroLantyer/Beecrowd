#include <iostream>
#include <vector>

void print_vector(std::vector <int> nums)
{
    int length = nums.size();
    for (int i = 0; i < length; i++)
    {
        std::cout << nums[i];
        if(i == (length-1))
        {
            std::cout << "\n";
        }
        else
        {
            std::cout << " ";
        }
    }
}

void fibonacci_vector(std::vector<int> nums, int n)
{
    int next_num;
    for (int i = 0; i < (n-2); i++)
    {
        next_num = (nums[i] + nums[i+1]);
        nums.push_back(next_num);
    }
    print_vector(nums);
}

int main()
{
    int n;
    std::vector<int> nums = {0,1};
    std::cin >> n;
    if (n == 1 || n == 2)
    {
        std::cout << nums[n-1] << std::endl;
    }
    else
    {
        fibonacci_vector(nums, n);
    }
    return 0;
}