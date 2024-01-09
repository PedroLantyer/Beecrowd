#include <iostream>
#include <string>

std::string population_increase_time(int PA, int PB, double GA, double GB)
{
    GA+= 0.000001, GB+= 0.000001; //USED TO FIX C++ FLOATING POINT PRECISION
    int time = 0;

    while(PA <= PB)
    {
        if (GB != 0)
        {
            PB *= (1+(GB/100));
        }
        PA *= (1+(GA/100));
        time ++;

        if (time > 100)
        {
            return "Mais de 1 seculo.";
        }
    }

    std::string result;
    result = (std::to_string(time) + " anos.");
    return result;
}

int main()
{
    int n;
    std::cin >> n;
    int PA,PB;
    double GA,GB;
    for(int i = 0; i < n; i++)
    {
        std::cin >> PA >> PB >> GA >> GB;
        std::cout << population_increase_time(PA,PB,GA,GB) << std::endl;
    }
}