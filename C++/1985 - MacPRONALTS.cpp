#include <iostream>
#include <vector>

double get_cost(int product_id,int quantity)
{
    if (product_id < 1001 || product_id > 1005)
    {
        //FAILSAFE
        return 0;
    }
    double cost = (product_id-1000)+0.50;
    cost *= quantity;
    return cost;
}

int main()
{
    int n, product_id, quantity;
    double cost = 0.00;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> product_id >> quantity;
        double price = get_cost(product_id,quantity);
        cost += price;
    }
    printf("%.2f\n",cost);
}