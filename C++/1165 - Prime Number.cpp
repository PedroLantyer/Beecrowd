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

/*
Lembrando que todo numero primo maior que 6 pode ser representado por: 6*K +/- 1
e que todo número composto tem pelo menos um fator primo menor ou igual a raiz dele mesmo
(ou seja se A não possui fator primo menor ou igual a sqrt(A), A é um numero primo)
*/