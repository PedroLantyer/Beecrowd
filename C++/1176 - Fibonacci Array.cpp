#include <iostream>
#include <vector>

std::vector<int> get_nums(int test_cases)
{
    std::vector<int> nums;
    int x;
    for(int i = 0; i < test_cases; i++)
    {
        std::cin >> x;
        nums.push_back(x);
    }
    return nums;
}

long fibonacci_num(int x)
{
    std::vector<long> sequence = {0,1};
    long next;
    if(x == 0 || x == 1)
    {
        return x;
    }
    for(int i = 0; i < x-1 ; i++)
    {
        next = sequence[i]+sequence[i+1];
        sequence.push_back(next);
    }
    long fib_num = sequence[sequence.size()-1];
    return fib_num;
}

int main()
{
    int test_cases;
    long fib_num;
    std::cin >> test_cases;
    std::vector<int> nums = get_nums(test_cases);
    for(int i = 0; i < (int)nums.size(); i++)
    {
        fib_num = fibonacci_num(nums[i]);
        printf("Fib(%d) = %ld\n",nums[i],fib_num);
    }
    return 0;
}