#include <iostream>

int main()
{
    int x, y, z, d;
    char waste;
    scanf("%d %c %d %c %d %c %d", &x, &waste, &y, &waste, &z, &waste, &d);
    printf("%03d\n%03d\n%03d\n%02d\n", x, y, z, d);
    return 0;
}