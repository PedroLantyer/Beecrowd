#include <iostream>

int main()
{
    int x;
    do
    {
        std::cin >> x;
        if (x == 0)
        {
            break;
        }
        for (int i = 1; i <= x; i++)
        {
            std::cout << i;
            if (i == x)
            {
                std::cout << "\n";
            }
            else
            {
                std::cout << " ";
            }
        }
    }
    while(x != 0);
    return 0;
}