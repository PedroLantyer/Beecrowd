#include <iostream>
#include <vector>

int get_wage_group(double wage)
{
    if (wage >= 0 && wage <= 400)
    {
        return 0;
    }
    if (wage > 400 && wage <= 800)
    {
        return 1;
    }
    if (wage > 800 && wage <= 1200)
    {
        return 2;
    }
    if(wage > 1200 && wage <= 2000)
    {
        return 3;
    }
    return 4;
}

void get_raise(double wage, int group, std::vector<int> raise_rate)
{
    double new_wage = wage*((100+raise_rate[group])/100.00);
    double raise_value = new_wage-wage;
    printf("Novo salario: %.2f\n",new_wage);
    printf("Reajuste ganho: %.2f\n",raise_value);
    printf("Em percentual: %d %%\n",raise_rate[group]);
}

int main()
{
    std::vector<int> raise_rate = {15, 12, 10, 7, 4};
    double wage;
    std::cin >> wage;
    int group = get_wage_group(wage);
    get_raise(wage,group,raise_rate);
    return 0;
}