#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

bool triangle_exists(std::vector<int> sides)
{
    if(sides[0] < (sides[1]+sides[2]))
    {
        return true;
    }
    return false;
}

std::string get_triangle_type(std::vector<int> sides)
{
    int match = 1;
    for(int i = 1; i < 3; i++)
    {
        if(sides[i-1] == sides[i])
        {
            match++;
        }
    }
    if(match == 3)
    {
        return "Equilatero";
    }
    if(match == 2)
    {
        return "Isoceles";
    }
    return "Escaleno";
}

int int_pow(int base, int exponent)
{
    if(exponent == 0)
    {
        return 1;
    }
    
    int result = base;
    for(int i = 1; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}

bool pythagorean_check(std::vector<int> sides)
{
    //C² = (A² + B²)
    int C = sides[0], A = sides[1], B = sides[2];
    if(int_pow(C,2) == (int_pow(A,2)+int_pow(B,2)) )
    {
        return true;
    }
    return false;
}

void print_result(std::string triangle_type, bool is_rectangle)
{
    char ch;
    if(is_rectangle)
    {
        ch = 'S';
    }
    else
    {
        ch = 'N';
    }
    printf("Valido-%s\nRetangulo: %c\n",triangle_type.c_str(), ch);
}

int main()
{
    std::vector<int> sides;
    int num;

    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &num);
        sides.push_back(num);
    }
    std::sort(sides.begin(), sides.end(), std::greater<int>());

    if(triangle_exists(sides) == false)
    {
        printf("Invalido\n");
    }
    else
    {
        std::string triangle_type = get_triangle_type(sides);
        bool is_rectangle = pythagorean_check(sides);
        print_result(triangle_type, is_rectangle);
    }
    return 0;
}