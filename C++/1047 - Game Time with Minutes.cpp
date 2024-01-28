#include<iostream>

void print_result(int hours, int minutes)
{
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hours,minutes);
}

int main()
{
    int start_hour,start_minute,end_hour,end_minute;
    std::cin >> start_hour >> start_minute >> end_hour >> end_minute;
    int minutes,hours;
    if((start_hour == end_hour))
    {
        if (start_minute == end_minute)
        {
            print_result(24,0);
            return 0;
        }
        if (start_minute > end_minute)
        {
            end_minute+=60;
            minutes = end_minute-start_minute;
            print_result(23,minutes);
            return 0;
        }
        else //for readability purposes
        {
            minutes = end_minute-start_minute;
            print_result(0,minutes);
            return 0;
        }
    }
    if(start_hour > end_hour)
    {
        end_hour+= 24;
        hours = end_hour-start_hour;
        if(start_minute == end_minute)
        {
            print_result(hours,0);
            return 0;
        }
        if(start_minute > end_minute)
        {
            end_minute+= 60;
            hours--;
            minutes = end_minute-start_minute;
            print_result(hours,minutes);
            return 0;
        }
        else //for readability purposes
        {
            minutes = end_minute-start_minute;
            print_result(hours,minutes);
            return 0;
        }
    }
    else //for readability purposes
    {
        hours = end_hour-start_hour;
        if(start_minute == end_minute)
        {
            print_result(hours,0);
            return 0;
        }
        if(start_minute > end_minute)
        {
            hours--;
            end_minute+=60;
            minutes = end_minute-start_minute;
            print_result(hours,minutes);
            return 0;
        }
        else //for readability purposes
        {
            minutes = end_minute-start_minute;
            print_result(hours,minutes);
            return 0;
        }
    }
    return 1;
}