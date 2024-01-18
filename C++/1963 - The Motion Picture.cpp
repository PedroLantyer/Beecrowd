#include <iostream>

int main()
{
    double old_price, new_price, price_increase;
    std::cin >> old_price >> new_price;
    price_increase = ( (new_price*100.00) / old_price)-100.00;
    printf("%.2f%%\n", price_increase);
    return 0;
}