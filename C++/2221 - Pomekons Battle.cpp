#include <iostream>

std::string get_instance_result(int stats[2][3],int bonus)
{
    double values[] = {0.0,0.0};

    for(int i = 0; i < 2; i++)
    {
        values[i] += ((stats[i][0] + stats[i][1])/2.0);
        if (stats[i][2] % 2 == 0)
        {
            values[i] += bonus;
        }
    }

    if(values[0] > values[1])
    {
        return "Dabriel";
    }
    if(values[1] > values[0])
    {
        return "Guarte";
    }
    return "Empate";
}

int main()
{
    int instances, bonus;
    int stats[2][3] = {};
    scanf("%d", &instances);

    for(int i = 0; i < instances; i++)
    {
        scanf("%d", &bonus);

        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                scanf("%d", &stats[i][j]);
            }
        }

        std::cout << get_instance_result(stats, bonus) << std::endl;
    }

    return 0;
}