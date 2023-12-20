#include <cstdio>
#include <iostream>
 
int main() {
    double value;
    std::cin >> value;
    value += 0.001;
    int notas[] = {100,50,20,10,5,2};
    int length1 = (sizeof(notas)/sizeof(int));
    double moedas[] = {1.00,0.50,0.25,0.10,0.05,0.01};
    int length2 = (sizeof(moedas)/sizeof(double));
    std::cout << "NOTAS:\n";
    for (int i = 0; i < length1; i++)
    {
        int x = 0;
        while (value >= notas[i])
        {
            x ++;
            value -= notas[i];
        }
        printf("%d nota(s) de R$ %d.00\n", x, notas[i]);
    }
    std::cout << "MOEDAS:\n";
    for (int i = 0; i < length2; i++)
    {
        int x = 0;
        while (value >= moedas[i])
        {
            x ++;
            value -= moedas[i];
        }
        printf("%d moeda(s) de R$ %.2f\n", x, moedas[i]);
    }
    return 0;
}