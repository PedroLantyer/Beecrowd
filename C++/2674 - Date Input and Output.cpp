#include <iostream>

int main()
{
    int day, month, year;
    char waste;
    scanf("%d %c %d %c %d", &day, &waste, &month, &waste, &year);
    printf("%02d/%02d/%02d\n", month, day, year);
    printf("%02d/%02d/%02d\n", year, month, day);
    printf("%02d-%02d-%02d\n", day, month, year);
    return 0;
}