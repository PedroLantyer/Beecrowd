#include <iostream>
#include <vector>

std::vector<int> get_x_and_z()
{
    int x,z;
    std::cin >> x;
    do
    {
        std::cin >> z;
    }
    while (z <= x);
    std::vector<int> nums = {x,z};
    return nums;
}

int get_count(int x, int z)
{
    int sum = x, temp = x, count = 1;
    while (sum < z)
    {
        temp++;
        sum += temp;
        count ++;
    }
    return count;
}

int main()
{
    std::vector<int> nums = get_x_and_z();
    std::cout << get_count(nums[0],nums[1]) << std::endl;
    return 0;
}