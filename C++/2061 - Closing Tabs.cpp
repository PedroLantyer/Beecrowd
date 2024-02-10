#include <iostream>

int main()
{
    std::string action;
    int initial_num, actions,tabs;
    scanf("%d %d", &initial_num, &actions);
    tabs = initial_num;

    for(int i = 0; i < actions; i++)
    {
        std::cin >> action;
        if(action == "fechou")
        {
            tabs++;
        }
        else if(action == "clicou")
        {
            tabs--;
        }
    }
    printf("%d\n",tabs);
    return 0;
}