#include <iostream>
#include <cstdio>
 
int main() {
    int n;
    double x,y,z,result;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> x >> y >> z;
        result = ((x*2)+(y*3)+(z*5))/10;
        printf("%.1f\n",result);
    }
    return 0;
}