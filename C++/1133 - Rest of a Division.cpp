#include <iostream>
 
int main() {
    int x, y, temp;
    std::cin >> x >> y;
    if (y >= x)
    {
        temp = x;
        x = y;
        y = temp;
    }
    for (int i = (y+1); i < x; i++)
    {
        if ((i % 5 == 2) || (i % 5 == 3))
        {
            std::cout << i << std::endl;
        }
    }
    return 0;
}