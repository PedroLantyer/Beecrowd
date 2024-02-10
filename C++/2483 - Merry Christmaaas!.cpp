#include <iostream>
#include <iomanip>

int main()
{
    int num;
    std::cin>> num;
    std::cout << "Feliz nat" << std::setfill('a') << std::setw(num) << "" << "l!\n";
    return 0;
}