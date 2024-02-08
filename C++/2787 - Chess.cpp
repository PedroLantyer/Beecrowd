#include <iostream>

bool get_result(int x, int y)
{
    if(x % 2 == 0)
    {
        if (y % 2 != 0)
        {
            return false;
        }
        return true;
    }
    // if(x % 2 != 0)
    if(y %2 != 0)
    {
        return true;
    }
    return false;
}

int main()
{
    int x, y;
    std::cin >> x >> y;
    std::cout << get_result(x,y) << std::endl;
    return 0;
}