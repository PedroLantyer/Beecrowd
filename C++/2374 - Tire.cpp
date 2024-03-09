#include <iostream>

int main()
{
    int current_pressure, desired_pressure;
    std::cin >> current_pressure >> desired_pressure; //GET CURRENT PRESSURE AND DESIRED PRESSURE

    int delta = (current_pressure - desired_pressure); //VARIATION BETWEEN CURRENT PRESSURE AND DESIRED PRESSURE
    printf("%d\n", delta);

    return 0;
}