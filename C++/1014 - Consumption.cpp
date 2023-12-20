#include <iostream>
#include <cstdio>
 
int main() {
    float distance,fuel,consumption;
    std::cin >> distance;
    std::cin >> fuel;
    consumption = distance/fuel;
    printf("%.3f km/l\n", consumption);
    return 0;
}