#include <stdio.h>
#include <cmath>

double fibonnaci(int n)
{
    double result = 0.0;
    result += pow(((1+sqrt(5))/2.0),n);
    result -= pow(((1-sqrt(5))/2.0),n);
    result /= sqrt(5);
    return result;
}

int main() {
    int n;
    scanf("%d", &n);
    double result = fibonnaci(n);
    printf("%.1lf\n", result);
    return 0;
}