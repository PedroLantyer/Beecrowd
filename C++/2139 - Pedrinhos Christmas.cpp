#include <iostream>

void print_result(int day_count, bool is_december)
{
    if (is_december && (day_count <= 1))
    {
        if (day_count == 1)
        {   
            printf("E vespera de natal!\n");
        }
        else if (day_count == 0)
        {
            printf("E natal!\n");
        }
        else
        {
            printf("Ja passou!\n");
        }
    }
    else
    {
        printf("Faltam %d dias para o natal!\n", day_count);
    }
}

int main()
{
    int months, days, day_count, temp;
    int calendar[] = {31,29,31,30,31,30,31,31,30,31,30,31};
    while(scanf("%d %d", &months, &days) != EOF)
    {
        day_count = 0;
        if(months == 12)
        {
            day_count = 25-days;
            print_result(day_count, true);
        }
        else
        {
            temp = 0;
            for(int i = 0; i < months-1; i++)
            {
                temp += calendar[i];
            }
            day_count = (360 - temp - days);
            print_result(day_count, false);
        }
    }
}