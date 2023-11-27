#include <iostream>
#include <cstdio>

int main()
{
    std::string name;
    double pay,sales;
    std::cin >> name >> pay >> sales;
    printf("TOTAL = R$ %.2f\n", (pay+(sales*0.15)));
    return 0;
}