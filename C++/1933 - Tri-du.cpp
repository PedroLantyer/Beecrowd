#include <iostream>

int main()
{
    int x,y;
    std::cin >> x >> y;
    if (x == y)
    {
        printf("%d\n",x);
    }
    else
    {
        if (x > y)
        {
            printf("%d\n",x);
        }
        else
        {
            printf("%d\n",y);
        }
    }
}