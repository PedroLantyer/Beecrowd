#include <iostream>
#include <vector>

std::vector<int> get_pipes(int pipe_count)
{
    std::vector<int> pipes;
    int x;
    for(int i=0; i < pipe_count; i++)
    {
        std::cin >> x;
        pipes.push_back(x);
    }
    return pipes;
}

std::string get_result(std::vector<int> pipes, int jump_heigth)
{
    int delta;
    int max_pos = pipes.size()-1;
    for (int i = 1; i <= max_pos; i++)
    {
        delta = pipes[i]-pipes[i-1];
        if (abs(delta) > jump_heigth)
        {
            return "GAME OVER";
        }
    }
    return "YOU WIN";
}

int main()
{
    int jump_heigth, pipe_count;
    std::cin >> jump_heigth >> pipe_count;
    std::vector<int> pipes = get_pipes(pipe_count);
    std::cout << get_result(pipes, jump_heigth) << std::endl;
}