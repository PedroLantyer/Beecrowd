#include <iostream>
#include <cmath>
#include <cstdio>

int main()
{
    double r,area;
    std::cin >> r;
    area = 3.14159 * pow(r,2);
    printf("A=%.4f\n", area);
    return 0;
}