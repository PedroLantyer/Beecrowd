#include <iostream>
#include <cstdio>

int main()
{
    double x, y, z;
    std::cin >> x >> y >> z;
    printf("MEDIA = %.1f\n", (((x*2)+(y*3)+(z*5))/10));
    return 0;
}