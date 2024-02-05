#include<iostream>

int main()
{
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        printf("Ho");
        if(i < n-1)
        {
            printf(" ");
        }
        else
        {
            printf("!\n");
        }
    }
}