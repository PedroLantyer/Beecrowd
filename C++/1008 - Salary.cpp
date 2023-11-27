#include <iostream>
#include <cstdio>

int main()
{
    int num,hours;
    double pay;
    std::cin >> num >> hours >> pay;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", num,(hours*pay));
    return 0;
}