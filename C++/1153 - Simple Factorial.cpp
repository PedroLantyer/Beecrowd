#include <iostream>

int factorial(int n)
{
    int result = n;
    if (n == 1)
    {
        return 1;
    }
    for (int i = 1; i < n; i++)
    {
        result *= (n-i);
    }
    return result;
}

int main()
{
    int n;
    std::cin >> n;
    std::cout << factorial(n) << std::endl;
    return 0;
}