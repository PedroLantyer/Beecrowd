#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

std::vector<double> build_vector()
{
    std::vector<double> vect;
    double x;
    for(int i = 0; i < 3; i++)
    {
        std::cin >> x;
        vect.push_back(x);
    }
    return vect;
}

void check_equal_sides(std::vector<double> sides)
{
    int equal_to_first_count = 0;
    for(int i = 0; i < 2; i++)
    {
        if(sides[i]==sides[i+1])
        {
            equal_to_first_count++;
        }
    }
    if(equal_to_first_count==0){}
    else if(equal_to_first_count==2)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if(equal_to_first_count==1)
    {
        printf("TRIANGULO ISOSCELES\n");
    }
}

bool check_triangle_possible(std::vector<double>sides)
{
    if(sides[2] >= (sides[1]+sides[0]))
    {
        return false;
    }
    return true;
}

bool triangulo_retangulo(std::vector<double> sides)
{
    if(pow(sides[2],2) == (pow(sides[1],2)+pow(sides[0],2)))
    {
        return true;
    }
    return false;
}

bool triangulo_acutangulo(std::vector<double> sides)
{
    if(pow(sides[2],2) < (pow(sides[1],2))+pow(sides[0],2))
    {
        return true;
    }
    return false;
}

int main()
{
    std::vector<double> sides = build_vector();
    std::sort(sides.begin(),sides.end());
    if(check_triangle_possible(sides)==false)
    {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    if(triangulo_retangulo(sides))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if(triangulo_acutangulo(sides))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    else
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    check_equal_sides(sides);
    return 0;
}