#include <iostream>
#include <cmath>

int main()
{
    int x = 1,n;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cout << x << " " << pow(x,2) << " " << pow(x,3) << std::endl;
        x++;
    }
}