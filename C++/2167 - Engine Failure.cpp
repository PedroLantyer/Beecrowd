#include <iostream>
#include <vector>

int speed_fall_index(std::vector<int> speeds)
{
    int value = speeds[0];
    for(int i = 1; i < (int)speeds.size(); i++)
    {
        if(value > speeds[i])
        {
            return (i+1);
        }
        else
        {
            value = speeds[i];
        }
    }
    return 0;
}

int main()
{
    std::vector<int> speeds;
    int count,num;
    scanf("%d",&count);

    for(int i = 0; i < count;i++)
    {
        scanf("%d",&num);
        speeds.push_back(num);
    }

    std::cout << speed_fall_index(speeds) << std::endl;
    return 0;
}