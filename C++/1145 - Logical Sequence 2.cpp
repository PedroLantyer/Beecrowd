#include <iostream>

int main()
{
    int x,y;
    std::cin >> x >> y;
    for(int i = 1; i <= y; i++)
    {
        std::cout << i;
        if (i % x == 0)
        {
            std::cout << "\n";
        }
        else
        {
            std::cout << " ";
        }
    }
    return 0;
}