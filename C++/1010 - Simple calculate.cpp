#include <iostream>
#include <cstdio>
#include <vector>
#include <numeric>
 
int main()
{
    int code,unit;
    double price;
    std::vector<double> vect;
    for (int i = 0; i < 2; i++)
    {
        std::scanf("%d %d %lf", &code,&unit,&price);
        vect.push_back((unit*price));
    }
    double result {std::accumulate(vect.begin(),vect.end(),0.0)};
    printf("VALOR A PAGAR: R$ %.2f\n", result);
    return 0;
}