#include<iostream>

int main()
{
    unsigned int max = 2015;
    int test_cases;
    unsigned long year, result;

    std::cin >> test_cases;
    for(int i = 0; i < test_cases; i++)
    {
        std::cin >> year;
        if(year >= max)
        {
            result = year-(max-1);
            printf("%lu A.C.\n", result);
        }
        else
        {
            result = max-year;
            printf("%lu D.C.\n", result);
        }
    }
    return 0;
}