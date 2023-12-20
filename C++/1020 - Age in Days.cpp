#include <cstdio>
#include <iostream>
 
int main() {
    int days, months=0, years=0;
    std::cin >> days;
    while (days >= 365)
    {
        years ++;
        days -= 365;
    }
    while (days >= 30)
    {
        months++;
        days -= 30;
    }
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);
    return 0;
}