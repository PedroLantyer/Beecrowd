#include <iostream>

int main()
{
    int wins[] = {0,0}; //Wins[0] = Mary, Wins[1] = John
    int test_cases, winner;

    do
    {

        scanf("%d", &test_cases); //GET NUMBER OF TEST CASES
        if(test_cases == 0)
        {
            break;
        }
        std::cin.ignore();

        for(int i = 0; i < test_cases; i++) //GET WINNER FOR EACH COIN TOSS
        {
            scanf("%d", &winner); // (0 <= INPUT <= 1)
            wins[winner] ++;
        }
        
        printf("Mary won %d times and John won %d times\n", wins[0], wins[1]);
        wins[0] = 0, wins[1] = 0; //RESET WINS ARRAY

    }while(test_cases != 0);
    return 0;
}