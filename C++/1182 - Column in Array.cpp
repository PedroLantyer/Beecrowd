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

double sum_of_values(std::vector<std::vector<double>> vect, int collumn)
{
    double sum = 0;
    for(int i = 0; i < (int)vect.size(); i++)
    {
        sum += vect[i][collumn];
    }
    return sum;
}

double avg_of_values(std::vector<std::vector<double>> vect, int collumn)
{
    double sum = sum_of_values(vect, collumn);
    double avg = sum / (int)vect.size();
    return avg;
}

int main()
{
    int collumn;
    char operation;
    std::cin >> collumn >> operation;
    std::vector<std::vector<double>> _2D_vector = fill_vector();
    switch (operation)
    {
    case 'S':
        std::cout << std::setprecision(1) << std::fixed << sum_of_values(_2D_vector, collumn) << std::endl;
        break;
    case 'M':
        std::cout << std::setprecision(1) << std::fixed << avg_of_values(_2D_vector, collumn) << std::endl;
        break;
    default:
        break;
    }
    return 0;
}