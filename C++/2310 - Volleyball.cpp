#include<iostream>
#include<vector>

std::vector<double> get_results(std::vector<int> attempts, std::vector<int> success)
{
    std::vector<double> results;
    double temp;
    
    for(int i = 0; i < 3; i++)
    {
        temp = (success[i]*100.0)/attempts[i];
        results.push_back(temp);
    }

    return results;
}

std::vector<int> get_vector(std::vector<int> vect)
{
    int num;
    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &num);
        vect[i] += num;
    }
    return vect;
}

void print_results(std::vector<double> results)
{
    std::vector<std::string> words = {"Saque", "Bloqueio", "Ataque"};
    for(int i = 0; i < 3; i++)
    {
        printf("Pontos de %s: %.2lf %%.\n", words[i].c_str(), results[i]);
    }
}

int main()
{
    std::vector<int> attempts = {0,0,0}, success = {0,0,0};
    int num_of_players;
    std::string name;
    
    scanf("%d", &num_of_players);
    for(int i = 0; i < num_of_players; i++)
    {
        std::cin >> name;
        attempts = get_vector(attempts);
        success = get_vector(success);
    }
    
    std::vector<double> results = get_results(attempts, success);
    print_results(results);
}