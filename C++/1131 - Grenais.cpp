#include <iostream>
#include <vector>
#include <cstdio>

std::vector<int> check_results(int x, int y, std::vector<int> results)
{
    results[3]++;
    if (x > y)
    {
        results[0] ++;
    }
    else if(x < y)
    {
        results[1] ++;
    }
    else
    {
        results[2] ++;
    }
    return results;
}

void declare_winner(int a,int b)
{
    if (a > b)
    {
        std::cout << "Inter venceu mais\n";
    }
    else if (a < b)
    {
        std::cout << "Gremio venceu mais\n";
    }
    else
    {
        std::cout << "Nao houve vencedor\n";
    }
}

void print_results(std::vector<int> results)
{
    printf("%d grenais\n", (results[3]) );
    printf("Inter:%d\n", (results[0]) );
    printf("Gremio:%d\n", (results[1]) );
    printf("Empates:%d\n", (results[2]) );
    declare_winner(results[0], results[1]);
}

int main() {
    std::vector<int> results = {0,0,0,0}; // results[0]: INTER; results[1]: GREMIO; results[2]: EMPATE; results[3]: JOGOS;
    int x,y,option;
    do
    {
        std::cin >> x >> y;
        results = check_results(x,y,results);
        std::cout << "Novo grenal (1-sim 2-nao)\n";
        std::cin >> option;
    }
    while(option != 2);
    print_results(results);
    return 0;
}