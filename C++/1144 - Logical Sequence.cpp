#include <iostream>

int int_pow(int base, int exponent)
{
    int result=base;
    for(int i = 1; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    int x = 1,n;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cout << x << " " << int_pow(x,2) << " " << int_pow(x,3) << std::endl;
        std::cout << x << " " << int_pow(x,2)+1 << " " << int_pow(x,3)+1 << std::endl;
        x++;
    }
}