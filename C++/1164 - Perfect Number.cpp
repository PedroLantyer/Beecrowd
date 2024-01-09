#include <iostream>

bool perfect_check(int x)
{
    int sum = 0;
    if (x == 1)
    {
        return false;
    }

    for (int i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            sum += i;
        }
    }

    if (sum == x)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void print_answer(int x, bool is_perfect)
{
    if (is_perfect == true)
    {
        printf("%d eh perfeito\n", x);
    }
    else
    {
        printf("%d nao eh perfeito\n", x);
    }
}

int main()
{
    int n,x;
    bool is_perfect;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> x;
        is_perfect = perfect_check(x);
        print_answer(x,is_perfect);
    }
}