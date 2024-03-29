#include <iostream>
#include <vector>
#include <algorithm>

std::vector<double> build_vector()
{
    double x;
    std::vector<double> vect;
    for(int i = 0; i < 3; i++)
    {
        std::cin >> x;
        vect.push_back(x);
    }
    return vect;
}

bool check_triangle_possible(std::vector<double> nums)
{
    std::sort(nums.begin(),nums.end());
    if (nums[2] >= (nums[1]+nums[0]))
    {
        return false;
    }
    return true;
}

double get_perimetro(std::vector<double> nums)
{
    double result = 0.0;
    for(int i = 0; i < 3; i++)
    {
        result += nums[i];
    }
    return result;
}

double get_area_trapezio(std::vector<double> nums)
{
    double result = ((nums[0]+nums[1]) * nums[2])/2;
    return result;
}

int main()
{
    std::vector<double> nums = build_vector();
    bool triangle_possible = check_triangle_possible(nums);
    if(triangle_possible)
    {
        double perimetro = get_perimetro(nums);
        printf("Perimetro = %.1f\n",perimetro);
    }
    else
    {
        double area_trapezio = get_area_trapezio(nums);
        printf("Area = %.1f\n",area_trapezio);
    }
    return 0;
}