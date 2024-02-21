#include <iostream>
#include <vector>
#include <algorithm>

double get_results(double difficulty)
{
    double values[7];
    double temp, result = 0;

    for(int i = 0; i < 7; i++)
    {
        scanf("%lf", &temp);
        values[i] = temp;
        result += temp;
    }

    std::sort(values, values+7);
    result -= values[0];
    result -= values[6];
    result *= difficulty;

    return result;
}

int main()
{
    int diver_count;
    double difficulty;
    std::vector<double> results;
    std::vector<std::string> names;
    std::string temp;
    scanf("%d", &diver_count);

    for(int i = 0; i < diver_count; i++)
    {
        std::cin >> temp;
        names.push_back(temp);

        scanf("%lf", &difficulty);
        results.push_back(get_results(difficulty));
    }
    
    for(int i = 0; i < (int)results.size(); i++)
    {
        std::cout << names[i];
        printf(" %.2lf\n", results[i]);
    }

    return 0;
}