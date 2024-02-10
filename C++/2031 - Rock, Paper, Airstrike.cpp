#include <iostream>

void get_result(std::string player1, std::string player2)
{
    if(player1 == "ataque")
    {
        if(player2 == "ataque")
        {
            printf("Aniquilacao mutua\n");
        }
        else
        {
            printf("Jogador 1 venceu\n");
        }
    }
    else if(player1 == "pedra")
    {
        if(player2 == "papel")
        {
            printf("Jogador 1 venceu\n");
        }
        else if(player2 == "ataque")
        {
            printf("Jogador 2 venceu\n");
        }
        else
        {
            printf("Sem ganhador\n");
        }
    }
    else //player1 == papel
    {
        if(player2 == "papel")
        {
            printf("Ambos venceram\n");
        }
        else
        {
            printf("Jogador 2 venceu\n");
        }
    }
}

int main() 
{
    int test_cases;
    std::string player1,player2,result;
    scanf("%d",&test_cases);
    
    for(int i = 0; i < test_cases; i++)
    {
        std::cin >> player1 >> player2;
        get_result(player1,player2);
    }
    return 0;
}

/*
ataque vs. pedra: In this case, the player with ataque defeats the player with pedra for obvious reasons.
pedra vs. papel: In this case the player with pedra defeats the one with papel, because pedra hurts more.
papel vs. ataque: In here ataque wins because ataque always wins and papel is pathetic.
papel vs. papel: In this variation both players win because papel is useless and no one facing papel can lose.
pedra vs. pedra: To this case there is no winner because it depends on what the players decide to do with the pedra and usually do nothing at the end.
ataque vs. ataque: When this happens all players lose due to Mutual Annihilation.
*/