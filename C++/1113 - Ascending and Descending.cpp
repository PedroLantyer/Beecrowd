#include <iostream>
 
int main() {
    int x, y;
    do
    {
        std::cin >> x >> y;
        if (x == y)
        {
            break;
        }
        if (x > y)
        {
            std::cout << "Decrescente\n";
        }
        else
        {
            std::cout << "Crescente\n";
        }
    }
    while (x != y);
    return 0;
}