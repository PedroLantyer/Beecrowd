#include <iostream>
#include <vector>

std::vector<int> build_vector()
{
    std::vector<int> vect;
    int x;
    for(int i = 0; i < 10; i++)
    {
        std::cin >> x;
        if (x <= 0)
        {
            x = 1;
        }
        vect.push_back(x);
    }
    return vect;
}

void print_vector(std::vector<int> vect)
{
    for(int i = 0; i < (int)vect.size(); i++)
    {
        printf("X[%d] = %d\n", i, vect[i]);
    }
}

int main()
{
    std::vector<int> nums = build_vector();
    print_vector(nums);
    return 0;
}