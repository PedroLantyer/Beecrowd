#include <iostream>
#include <vector>

std::vector<int> get_time()
{
    char str[10];char ch;
    std::vector<int> time;
    time.clear();
    int day,hour,minute,second;

    scanf("%s %d", str, &day);
    scanf("%d %c %d %c %d", &hour, &ch, &minute, &ch, &second);
    fflush(stdin);
    time = {day,hour,minute,second};
    return time;
}

void get_duration(std::vector<int> start_time, std::vector<int> end_time)
{
    int days = end_time[0]-start_time[0], hours, minutes, seconds;
    int start_hour = start_time[1], end_hour = end_time[1];
    int start_min = start_time[2], end_min = end_time[2];
    int start_sec = start_time[3], end_sec = end_time[3];
    
    if(start_hour == end_hour)
    {
        hours = 0;
    }
    else if(start_hour > end_hour)
    {
        hours = (end_hour+24)-start_hour;
        days --;
    }
    else
    {
        hours = end_hour-start_hour;
    }

    if(start_min == end_min)
    {
        minutes = 0;
    }
    else if(start_min > end_min)
    {
        minutes = (end_min+60)-start_min;
        hours--;
    }
    else
    {
        minutes = end_min - start_min;
    }

    if(start_sec == end_sec)
    {
        seconds = 0;
    }
    else if(start_sec > end_sec)
    {
        seconds = (end_sec+60)-start_sec;
        minutes --;
    }
    else
    {
        seconds = end_sec-start_sec;
    }
    
    if(seconds < 0)
    {
        seconds += 60;
        minutes -= 1;
    }
    if(minutes < 0)
    {
        minutes += 60;
        hours -= 1;
    }
    if(hours < 0)
    {
        hours += 24;
        days --;
    }

    
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", days, hours, minutes, seconds);
}

int main()
{
    std::vector<int> start_time = get_time();
    std::vector<int> end_time = get_time();
    get_duration(start_time,end_time);
    return 0;
}