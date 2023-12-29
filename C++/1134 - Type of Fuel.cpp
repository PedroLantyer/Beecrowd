#include <iostream>
#include <cstdio>
#include <vector>

void print_results(std::vector<int> results)
{
    std::vector<std::string> type_of_fuel = {"Alcool","Gasolina","Diesel"};
    std::cout << "MUITO OBRIGADO\n";
    for (int i = 0; i < 3; i++)
    {
        printf("%s: %d\n", (type_of_fuel[i].c_str()), results[i]);
    }
}

int main()
{
    std::vector<int> results = {0,0,0}; //Alcool, Gasolina, Diesel
    int num;
    do
    {
        std::cin >> num;
        if (num == 4)
        {
            break;
        }
        switch(num)
        {
            case 1:
                results[0]++;
                break;
            case 2:
                results[1]++;
                break;
            case 3:
                results[2]++;
                break;
            default:
                break;
        }
    }
    while (num != 4);
    print_results(results);
    return 0;
}