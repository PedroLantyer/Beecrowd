#include <iostream>
#include <iomanip>

int main()
{
    std::cout << std::setw(39) << std::setfill('-') <<"" << std::endl;
    std::cout << "|" << std::setfill(' ') << std::setw(37) << std::left << "x = 35" << '|' << std::endl;
    std::cout << '|' << std::setfill(' ')  << std::setw(37) << "" << "|" << std::endl;
    std::cout << '|' << std::setfill(' ') << std::setw(15)  << "" << "x = 35" << std::setw(16) << "" << '|' << std::endl;
    std::cout << '|' << std::setfill(' ')  << std::setw(37) << "" << "|" << std::endl;
    std::cout << '|' << std::setfill(' ')  << std::setw(37) << std::right << "x = 35" << '|' << std::endl;
    std::cout << std::setw(39) << std::setfill('-') <<"" << std::endl;
    return 0;
}