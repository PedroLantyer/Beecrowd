#include <iostream>

bool get_player1_even(std::string player1_choice)
{
    if(player1_choice == "PAR")
    {
        return true;
    }
    return false;
}

void get_winner(bool player1_even, unsigned long num1, unsigned long num2, std::string player1, std::string player2)
{
    unsigned long sum = num1 + num2;
    if(player1_even == (sum % 2 == 0))
    {
        std::cout << player1 << std::endl;
    }
    else
    {
        std::cout << player2 << std::endl;
    }
}

int main()
{
    int test_cases;
    std::cin >> test_cases;

    std::string player1, player2, player1_choice, waste;
    bool player1_even;
    unsigned long num1, num2;

    for(int i = 0; i < test_cases; i++)
    {
        std::cin >> player1 >> player1_choice >> player2 >> waste;
        std::cin >> num1 >> num2;
        player1_even = get_player1_even(player1_choice);
        get_winner(player1_even, num1, num2,player1,player2);
    }
    return 0;
}