#include <iostream>
#include <cstdio>
#include <cmath>

int main()
{
    double pi = 3.14159;
    int radius;
    std::cin >> radius;
    double volume = (4/3.0) * pi * pow(radius,3);
    printf("VOLUME = %.3f", volume);
    return 0;
}