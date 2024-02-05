#include <iostream>
#include <vector>
#include <iomanip>

std::vector<std::vector<double>> fill_vector()
{
    std::vector<std::vector<double>> _2D_vector;
    std::vector<double> sub_vector;
    double x;
    for(int i = 0;i < 12; i++)
    {
        for(int j = 0; j < 12; j++)
        {
            std::cin >> x;
            sub_vector.push_back(x);
        }
        _2D_vector.push_back(sub_vector);
        sub_vector.clear();
    }
    return _2D_vector;
}

double sum_of_values(std::vector<std::vector<double>> vect, int line)
{
    double sum = 0;
    for(int i = 0; i < (int)vect[line].size(); i++)
    {
        sum += vect[line][i];
    }
    return sum;
}

double avg_of_values(std::vector<std::vector<double>> vect, int line)
{
    double sum = sum_of_values(vect, line);
    double avg = sum / (int)vect[line].size();
    return avg;
}

int main()
{
    int line;
    char operation;
    std::cin >> line >> operation;
    std::vector<std::vector<double>> _2D_vector = fill_vector();
    switch (operation)
    {
    case 'S':
        std::cout << std::setprecision(1) << std::fixed << sum_of_values(_2D_vector, line) << std::endl;
        break;
    case 'M':
        std::cout << std::setprecision(1) << std::fixed << avg_of_values(_2D_vector, line) << std::endl;
        break;
    default:
        break;
    }
    return 0;
}