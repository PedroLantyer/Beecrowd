#include <iostream>

std::string sao_multiplos(int high, int low)
{
    if(high % low == 0)
    {
        return "Sao Multiplos";
    }
    return "Nao sao Multiplos";
}

int main()
{
    int x,y;
    std::cin >> x >> y;
    if (x > y)
    {
        std::cout << sao_multiplos(x,y) << std::endl;
    }
    else
    {
        std::cout << sao_multiplos(y,x) << std::endl;
    }
    return 0;
}