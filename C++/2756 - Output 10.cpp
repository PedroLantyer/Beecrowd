#include<iostream>
#include<iomanip>

void variation_1()
{
    std::cout << std::setw(7) << std::setfill(' ') << "" << "A\n";
}

void variation_2(char ch, int width_1, int width_2)
{
    std::cout << std::setw(width_1) << std::setfill(' ') << "" << ch << std::setw(width_2) << std::setfill(' ') << "" << ch << std::endl;
}

int main()
{
    variation_1();
    variation_2('B', 6, 1);
    variation_2('C', 5, 3);
    variation_2('D', 4, 5);
    variation_2('E', 3, 7);
    variation_2('D', 4, 5);
    variation_2('C', 5, 3);
    variation_2('B', 6, 1);
    variation_1();
}