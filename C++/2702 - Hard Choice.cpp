#include<iostream>

int get_missing(int available[3], int selected[3])
{
    int missing = 0;
    for(int i = 0; i < 3; i++)
    {
        if(selected[i] > available[i])
        {
            missing += (selected[i] - available[i]);
        }
    }
    return missing;
}

int main()
{
    int available[3] = {0,0,0}, selected[3] = {0,0,0};
    scanf("%d %d %d", &available[0], &available[1], &available[2]);
    scanf("%d %d %d", &selected[0], &selected[1], &selected[2]);
    std::cout << get_missing(available, selected) << std::endl; 
}