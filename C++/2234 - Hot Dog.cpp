#include <iostream>

int main()
{
    int amount,participants;
    std::cin >> amount >> participants;
    double avg = (amount/double(participants));
    printf("%.2f\n",avg);
    return 0;
}