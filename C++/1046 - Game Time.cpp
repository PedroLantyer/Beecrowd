#include <iostream>

int get_game_length(int start_time, int end_time)
{
    if(start_time == end_time)
    {
        return 24;
    }
    if(start_time > end_time)
    {
        end_time+= 24;
    }
    int game_length = end_time-start_time;
    return game_length;
}

int main()
{
    int start_time,end_time;
    std::cin >> start_time >> end_time;
    int game_length = get_game_length(start_time,end_time);
    printf("O JOGO DUROU %d HORA(S)\n",game_length);
    return 0;
}