#include <iostream>

int main()
{
    unsigned int x;
    do
    {
        std::cin >> x;
        if(std::cin.eof())
        {
            break;
        }
        if(x > 0)
        {
            printf("vai ter duas!\n");
        }
        else
        {
            printf("vai ter copa!\n");
        }

    }
    while(std::cin.eof() == false);
    return 0;
}