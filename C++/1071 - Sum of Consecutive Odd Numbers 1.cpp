#include <iostream>

void sum_consecutive_odd(int high, int low)
{
    int sum = 0;
    for (int i = (low+1); i < high; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    std::cout << sum << std::endl;
}

int main() {
    int x,y;
    std::cin >> x;
    std::cin >> y;
    if (x > y)
    {
        sum_consecutive_odd(x,y);
    }
    else if (y > x)
    {
        sum_consecutive_odd(y,x);
    }
    else
    {
        std::cout << 0 << std::endl;
    }
    return 0;
}