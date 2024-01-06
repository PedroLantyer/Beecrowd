#include <iostream>
#include <cstdio>

int main()
{
    int x = 1,n;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        printf("%d %d %d PUM\n", x, x+1, x+2);
        x+= 4;
    }
    return 0;
}