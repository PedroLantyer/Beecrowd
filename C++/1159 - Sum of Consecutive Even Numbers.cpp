#include <iostream>

int sum_of_consecutive_even(int x)
{
    int result = 0;
    if (x % 2 != 0)
    {
        x++;
    }
    for (int i = 0; i < 5; i++)
    {
        result += x;
        x += 2;
    }
    return result;
}

int main()
{
    int x;
    do
    {
        std::cin >> x;
        if (x == 0)
        {
            break;
        }
        std::cout << sum_of_consecutive_even(x) << std::endl;
    }
    while (x != 0);
}