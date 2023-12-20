#include <cstdio>
#include <iostream>
 
int main() {
    int speed,t;
    std::cin >> t;
    std::cin >> speed;
    double fuel_usage = (t*speed)/12.0;
    printf("%.3f\n", fuel_usage);
    return 0;
}