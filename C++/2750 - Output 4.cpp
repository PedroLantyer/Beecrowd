#include <iostream>
#include <iomanip>

int main()
{
    std::cout << std::setw(39) << std::setfill('-') << "" << std::endl;
    std::cout << "|  decimal  |  octal  |  Hexadecimal  |" << std::endl;
    std::cout << std::setw(39) << "" << std::endl;
    for(int i = 0; i < 16; i++)
    {
        std::cout << '|' << std::uppercase << std::right << std::setfill(' ') << std::setw(7) << std::dec << i;
        std::cout << std::setw(5) << "|";
        std::cout << std::setw(5) << std::oct << i;
        std::cout << std::setw(5) << "|";
        std::cout << std::setw(8) << std::hex << i;
        std::cout << std::setw(8) << "|" << std::endl;
    }
    std::cout << std::setw(39) << std::setfill('-') << "" << std::endl;
    return 0;
}