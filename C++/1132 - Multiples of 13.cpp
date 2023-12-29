#include <iostream>

int main() {
    int x,y,temp,sum=0;
    std::cin >> x >> y;
    if (y >= x)
    {
        temp = x;
        x = y;
        y = temp;
    }
    for (int i = y; i <= x; i++)
    {
        if (i % 13 != 0)
        {
            sum += i;
        }
    }
    std::cout << sum << std::endl;
    return 0;
}