#include<iostream>
#include<vector>

int get_tax_group(double wage)
{
    if (wage <= 2000)
    {
        return -1;
    }
    if (wage > 2000 && wage <= 3000)
    {
        return 0;
    }
    if (wage > 3000 && wage <= 4500)
    {
        return 1;
    }
    return 2;
}

void get_taxes(double wage, int tax_group)
{
    double value=0;
    wage -= 2000;
    std::vector<int> range_limits = {1000,1500};
    std::vector<int> tax_percents = {8,18,28};
    for(int i = 0; i <= tax_group; i++)
    {
        if(i != 2)
        {
            if (wage > range_limits[i])
            {
                value += range_limits[i]*(tax_percents[i]/100.00);
                wage -= range_limits[i];
            }
            else
            {
                value += wage*(tax_percents[i]/100.00);
                break;
            }
        }
        else
        {
            value += wage*(tax_percents[i]/100.00);
            break;
        }
    }
    printf("R$ %.2f\n",value);
}

int main()
{
    double wage;
    std::cin >> wage;

    int tax_group = get_tax_group(wage);
    if(tax_group == -1)
    {
        printf("Isento\n");
        return 0;
    }

    get_taxes(wage,tax_group);
    return 0;
}