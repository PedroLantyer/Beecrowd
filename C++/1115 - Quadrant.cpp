#include <iostream>

void quadrante(int x, int y)
{
    if (x > 0)
    {
        if (y > 0)
        {
            std::cout << "primeiro\n";
        }
        else if (y < 0)
        {
            std::cout << "quarto\n";
        }
    }
    else if (x < 0)
    {
        if (y > 0)
        {
            std::cout << "segundo\n";
        }
        else if (y < 0)
        {
            std::cout << "terceiro\n";
        }
    }
}

int main() {
    int x, y;
    do
    {
        std::cin >> x >> y;
        if (x == 0 || y == 0)
        {
            break;
        }
        quadrante(x,y);
    }
    while (x != 0 && y != 0);
    return 0;
}