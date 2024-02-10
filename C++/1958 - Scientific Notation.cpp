#include <iostream>
#include <iomanip>
#include <sstream>
 
int main()
{
    long double num;
    std::cin >> num;
    std::cout << std::scientific << std::setprecision(4) << std::showpos <<std::uppercase << num << std::endl;
    return 0;
}