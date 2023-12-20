#include <iostream>
#include <cstdio>
#include <cmath>
 
int main() {
    double x1,y1,x2,y2,distance;
    std::cin >> x1 >> y1;
    std::cin >> x2 >> y2;
    distance = sqrt((pow(x2-x1,2)+pow(y2-y1,2)));
    printf("%.4f\n", distance);
    return 0;
}