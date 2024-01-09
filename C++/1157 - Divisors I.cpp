#include <iostream>

void even_divisors(int n)
{
    for(int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d\n",i);
        }
    }
}

void odd_divisors(int n)
{
    for(int i = 1; i < n; i+=2)
    {
        if (n % i == 0)
        {
            printf("%d\n",i);
        }
    }
}

int main()
{
    int n;
    std::cin >> n;
    if (n % 2 == 0)
    {
        even_divisors(n);
    }
    else
    {
        odd_divisors(n);
    }
}