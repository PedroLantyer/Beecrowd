#include <iostream>
#include <vector>
#include <cstdio>
 
void print_results(std::vector <int> nums)
{
    std::vector <std::string> animals = {"coelhos","ratos","sapos"};
    printf("Total: %d cobaias\n", nums[3]);
    for (int i = 0; i < 3; i++)
    {
        printf("Total de %s: %d\n",(animals[i].c_str()),nums[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        double percent;
        percent = (nums[i]/double(nums[3]))*100;
        printf("Percentual de %s: %.2f %%\n",(animals[i].c_str()),percent);
    }
}

std::vector<int> get_data(int n)
{
    int x;
    char c;
    std::vector <int> nums = {0,0,0,0};
    for(int i = 0; i < n; i++)
    {
        std::cin >> x >> c;
        switch (c)
        {
        case 'C':
            nums[0] +=  x;
            nums[3] += x;
            break;
        case 'R':
            nums[1] += x;
            nums[3] += x;
            break;
        case 'S':
            nums[2] += x;
            nums[3] += x;
            break;
        default:
            break;
        }
    }
    return nums;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums = get_data(n);
    print_results(nums);
    return 0;
}