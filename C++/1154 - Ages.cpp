#include <iostream>
#include <cstdio>
#include <vector>

std::vector<int> get_ages()
{
    std::vector<int> ages;
    int n;
    do
    {
        std::cin >> n;
        if (n < 0)
        {
            break;
        }
        ages.push_back(n);
    }
    while (n >= 0);
    return ages;
}

void average_age(std::vector <int> ages)
{
    int length, sum = 0;
    length = ages.size();
    for (int i = 0; i < length; i++)
    {
        sum += ages[i];
    }
    double avg = (sum/double(length));
    printf("%.2f\n",avg);
}

int main()
{
    std::vector<int> ages;
    ages = get_ages();
    average_age(ages);
    return 0;
}