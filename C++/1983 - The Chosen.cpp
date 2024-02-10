#include <iostream>
#include <vector>

int get_index_of_max(std::vector<double> score)
{
    double max_value = score[0];
    int index = 0;
    for(int i = 1; i < (int)score.size(); i++)
    {
        if(score[i] > max_value)
        {
            max_value = score[i];
            index = i;
        }
    }
    return index;
}

int main()
{
    std::vector<int> registration;
    std::vector<double> score;
    int count,temp1;
    double temp2;
    std::cin >> count;

    for(int i = 0; i < count; i++)
    {
        std::cin >> temp1 >> temp2;
        registration.push_back(temp1);
        score.push_back(temp2);
    }

    int index = get_index_of_max(score);
    double max_score = score[index];
    if (max_score < 8)
    {
        printf("Minimum note not reached\n");
        return 0;
    }
    printf("%d\n", registration[index]);
    return 0;
}