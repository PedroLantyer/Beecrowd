#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> build_vector()
{
    std::vector<int> vect;
    int x;
    for(int i = 0; i < 3; i++)
    {
        std::cin >> x;
        vect.push_back(x);
    }
    return vect;
}

void print_vector(std::vector<int> vect)
{
    for(int i = 0; i < (int)vect.size(); i++)
    {
        printf("%d\n",vect[i]);
    }
}

int main()
{
    std::vector<int> nums,sorted_nums;
    nums = build_vector();
    sorted_nums = nums;
    std::sort(sorted_nums.begin(),sorted_nums.end());
    print_vector(sorted_nums);
    printf("\n");
    print_vector(nums);
}