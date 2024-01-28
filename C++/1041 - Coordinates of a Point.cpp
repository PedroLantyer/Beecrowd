#include <iostream>

std::string get_quadrant(double x,double y)
{
    if(x == 0)
    {
        return "Eixo Y";
    }
    if(y == 0)
    {
        return "Eixo X";
    }
    if (x > 0)
    {
        if (y > 0)
        {
            return "Q1";
        }
        else
        {
            return "Q4";
        }
    }
    else
    {
        if (y > 0)
        {
            return "Q2";
        }
        else
        {
            return "Q3";
        }
    }
}

int main()
{
    double x,y;
    std::cin >> x >> y;
    if (x == 0 && y == 0)
    {
        printf("Origem\n");
    }
    else
    {
        std::cout << get_quadrant(x,y) << std::endl;
    }
    return 0;
}