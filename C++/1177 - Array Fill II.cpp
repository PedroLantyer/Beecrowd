#include<iostream>

int main()
{
    int x, n = 0;
    std::cin >> x;
    for(int i = 0; i < 1000; i++)
    {
        printf("N[%d] = %d\n", i, n);
        if(n < x-1)
        {
            n++;
        }
        else
        {
            n = 0;
        }
    }
}