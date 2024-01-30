#include <iostream>
#include <cmath>

bool is_prime(int num)
{
    if (num == 2 || num == 3)
    {
        return true;
    }
    if (num <= 1 || num % 2 == 0 || num % 3 == 0)
    {
        return false;
    }

    int sqrt_of_num = (int)sqrt(num);
    for(int k = 1; ((6*k)-1) < (sqrt_of_num+1); k+= 1)
    {
        if (num % ((6*k)-1) == 0 || num % ((6*k)+1) == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int count,num;
    bool prime;
    std::cin >> count;

    for(int i = 0; i < count; i++)
    {
        std::cin >> num;
        prime = is_prime(num);
        if(prime)
        {
            printf("%d eh primo\n", num);
        }
        else
        {
            printf("%d nao eh primo\n", num);
        }
    }
}