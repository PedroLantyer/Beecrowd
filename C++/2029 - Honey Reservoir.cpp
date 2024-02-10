#include <iostream>
#include <cstdio>

int main()
{
    double volume, diameter, pi = 3.14, height, area, radius,radius_squared;
    while(scanf("%lf %lf", &volume, &diameter) != EOF)
    {
        if(std::cin.eof())
        {
            break;
        }

        radius = (diameter/2);
        radius_squared = radius*radius;
        area = pi*radius_squared;
        height = volume/area;
        printf("ALTURA = %.2lf\n", height);
        printf("AREA = %.2lf\n", area);
    }
    return 0;
}

//volume = pi*(r^2)*h;
//area do circulo= pi*(r^2)
//h = volume/(pi*(r^2))