#include <iostream>

int main()
{
    double num;
    int count = 0;
    for(int i = 0; i < 6; i++)
    {
        std::cin >> num;
        if(num > 0)
        {
            count ++;
        }
    }
    printf("%d valores positivos\n",count);
    return 0;
}