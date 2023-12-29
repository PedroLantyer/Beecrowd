#include <iostream>
#include <cstdio>
 
int main() {
    int n,x,y;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> x >> y;
        if (y == 0)
        {
            std::cout << "divisao impossivel\n";
        }
        else
        {
            printf("%.1f\n", (x/double(y)) );
        }
    }
    return 0;
}