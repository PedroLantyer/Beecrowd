#include <iostream>

void get_interval(double num)
{
    if (num >= 0 && num <= 25)
    {
        printf("Intervalo [0,25]\n");
    }
    else if (num > 25 && num <= 50)
    {
        printf("Intervalo (25,50]\n");
    }
    else if (num > 50 && num <= 75)
    {
        printf("Intervalo (50,75]\n");
    }
    else
    {
        printf("Intervalo (75,100]\n");
    }
}

int main()
{
    double num;
    std::cin >> num;
    if (num < 0 || num > 100)
    {
        printf("Fora de intervalo\n");
    }
    else
    {
        get_interval(num);
    }
    return 0;
}