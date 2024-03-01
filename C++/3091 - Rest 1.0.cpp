#include <iostream>

int main()
{
    int a, b, remainder;

    scanf("%d", &a);
    scanf("%d", &b);

    remainder = (a%b);
    printf("%d\n", remainder);
    return 0;
}