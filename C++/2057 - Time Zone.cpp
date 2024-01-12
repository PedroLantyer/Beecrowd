#include <iostream>

int get_arrival(int departure_time, int travel_length, int time_zone)
{
    int arrival;
    arrival = departure_time+travel_length+time_zone;
    if (arrival < 0)
    {
        arrival += 24;
    }
    if (arrival >= 24)
    {
        arrival -= 24;
    }
    return arrival;
}

int main()
{
    int departure_time, travel_length, time_zone;
    std::cin >> departure_time >> travel_length >> time_zone;
    std::cout << get_arrival(departure_time,travel_length,time_zone) << std::endl;
}