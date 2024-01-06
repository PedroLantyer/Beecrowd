#include <cstdio>

int main()
{
    int i = 1, j = 7, temp;
    while (i <= 9)
    {
        temp = j;
        for(int iter = 0; iter < 3; iter++)
        {
            printf("I=%d J=%d\n", i,j);
            j--;
        }
        j = (temp+2);
        i += 2;
    }
    return 0;
}