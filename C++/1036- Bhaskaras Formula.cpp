#include <cstdio>
#include <cmath>
#include <iostream>

int main() {
    double a,b,c;
    std::cin >> a >> b >> c;
    if (a == 0)
    {
        std::cout << "Impossivel calcular\n";
    }
    else
    {
        double delta = (pow(b,2)-(4*a*c));
        if (delta < 0)
        {
            std::cout << "Impossivel calcular\n";
        }
        else
        {
            double r1,r2;
            r1 = (( -b + sqrt(delta)) / (2 * a));
            r2 = (( -b - sqrt(delta)) / (2 * a));
            printf("R1 = %.5f\nR2 = %.5f\n", r1,r2);
        }
    }
    return 0;
}