#include <cstdio>

int main()
{
    int i = 0, j= 10, temp;
    float temp_float; /*USED FOR CALCULATIONS*/
    while (i <= 20)
    {
        temp = j;
        for(int iter = 0; iter < 3; iter++)
        {
            if (i % 10 == 0)
            {
                printf("I=%d",(i/10));
            }
            else
            {
                temp_float = (i/10.0);
                printf("I=%.1f",temp_float);
            }
            if (j % 10 == 0)
            {
                printf(" J=%d\n",(j/10));
            }
            else
            {
                temp_float = (j/10.0);
                printf(" J=%.1f\n",temp_float);
            }
            j+=10;
        }
        j = temp+2;
        i+= 2;
    }
    return 0;
}