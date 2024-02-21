#include <iostream>

int main()
{
    int consumption[] = {300,1500,600,1000,150};
    int sum = 0, portions;

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &portions);
        sum += (consumption[i]*portions);
    }
    sum += 225;

    printf("%d\n", sum);
}