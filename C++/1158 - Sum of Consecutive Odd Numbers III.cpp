#include <iostream>

int sum_of_consecutive_odd(int x, int count)
{
    int result = 0;
    if (x % 2 == 0)
    {
        x++;
    }
    for(int i = 0; i < count; i++)
    {
        result +=x;
        x+= 2;
    }
    return result;
}

int main()
{
    int n,x,count;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> x >> count;
        std::cout << sum_of_consecutive_odd(x,count) << std::endl;
    }
    return 0;
}