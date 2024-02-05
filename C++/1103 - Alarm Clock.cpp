#include <iostream>
#include <vector>

int get_time_difference(int start_hour, int start_min, int end_hour, int end_min)
{
    int hours,minutes;
    
    if (end_hour < start_hour && end_hour == 0)
    {
        end_hour = 24;
    }

    if(start_hour == end_hour)
    {
        if(start_min > end_min)
        {
            hours = 23;
            minutes = (end_min+60-start_min);
            minutes += (hours*60);
            return minutes;
        }
        if(start_min == end_min)
        {
            minutes = 24*60;
            return minutes;
        }
        //start_min < end_min
        minutes = end_min-start_min;
        return minutes;
    }

    if(start_hour > end_hour)
    {
        hours = (end_hour+24-start_hour);
        if(start_min > end_min)
        {
            minutes = (end_min+60-start_min);
            minutes += (hours*60);
        }
        if(start_min == end_min)
        {        
            minutes = hours*60;
            return minutes;
        }
        //start_min < end_min
        minutes = end_min-start_min;
        minutes += (hours*60);
        return minutes;
    }

    //start_hour < end_hour
    hours = (end_hour-start_hour);
    if(start_min > end_min)
    {
        minutes = end_min+60-start_min;
        hours--;
        minutes += (hours*60);
        return minutes;
    }
    if(start_min == end_min)
    {
        minutes = hours*60;
        return minutes;
    }
    // start_min < end_min
    minutes = end_min-start_min;
    minutes += (hours*60);
    return minutes;
}

void print_answers(std::vector<int> answers)
{
    for(int i = 0; i < (int)answers.size(); i++)
    {
        printf("%d\n",answers[i]);
    }
}

int main()
{
    bool done = false;
    std::vector<int> answers;
    int start_hour,start_min,end_hour,end_min;
    while (done != true)
    {
        std::cin >> start_hour >> start_min >> end_hour >> end_min;
        if ((start_hour == end_hour) && (start_hour == start_min) && (start_hour == end_min) && (start_hour == 0))
        {
            break;
        }
        answers.push_back(get_time_difference(start_hour,start_min,end_hour,end_min));
    }
    if((int)answers.size() == 0)
    {
        return 0;
    }
    print_answers(answers);
    return 0;
}