#include <iostream>

bool check_triangle(int A, int B, int C)
{
    if (((A+B)>C) && ((B+C)>A) && ((A+C)>B))
    {
        return true;
    }
    else
    {
        return false;
    }
}

char get_result(int A, int B, int C, int D)
{
    if (check_triangle(A,B,C) || check_triangle(A,C,D) || check_triangle(B,C,D) || check_triangle(A,B,D))
    {
        return 'S';
    }
    return 'N';
}

int main()
{
    int A,B,C,D;
    std::cin >> A >> B >> C >> D;
    std::cout << get_result(A,B,C,D) << std::endl;
}