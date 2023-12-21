#include <iostream>
 
int main() {
    int x, count = 0;
    std::cin >> x;
    while (count < 6)
    {
        if (x % 2 == 1)
        {
            std::cout << x << std::endl;
            count ++;
            x += 2;
        }
        else if (count == 0)
        {
            x ++;
        }
    }
    return 0;
}