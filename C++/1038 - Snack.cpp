#include <iostream>
#include <vector>

double get_price(int item_code, int amount, std::vector<double> price_table)
{
    double price;
    price = price_table[item_code-1]*amount;
    return price;
}

int main()
{
    int item_code,amount;
    std::vector<double> price_table = {4.00, 4.50, 5.00, 2.00, 1.50};
    std::cin >> item_code >> amount;
    double price = get_price(item_code, amount, price_table);
    printf("Total: R$ %.2f\n",price);
    return 0;
}