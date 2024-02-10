#include<iostream>
#include <cmath>

bool is_prime(int num)
{
    if(num == 2 || num == 3)
    {
        return true;
    }
    if(num <= 1 || num % 2 == 0 || num % 3 == 0)
    {
        return false;
    }
    
    int sqrt_num = (int)sqrt(num);
    for(int k = 1;(6*k-1) < (sqrt_num + 1); k++)
    {
        if(num % ((6*k)-1) == 0 || num % ((6*k)+1) == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int test_cases;
    int num;
    std::cin >> test_cases;
    for(int i = 0; i < test_cases; i++)
    {
        std::cin >> num;
        if(is_prime(num) == false)
        {
            printf("Not ");
        }
        printf("Prime\n");
    }
}

/*
Lembrando que todo numero primo maior que 6 pode ser representado por: 6*K +/- 1
e que todo número composto tem pelo menos um fator primo menor ou igual a raiz dele mesmo
(ou seja se A não possui fator primo menor ou igual a sqrt(A), A é um numero primo)
*/
//Every positive integer except 1 is divisible by at least one prime number by the Fundamental Theorem of Arithmetic
//Therefore if a number is divisible by a prime number that is less and equal to the Square Root of N, it is not prime