#include <iostream>
 
int main() {
    
    do
    {
        int number_of_gameplays, university_id, author_university_id, game_id, count = 0; 

        std::cin >> number_of_gameplays >> university_id;
        if(std::cin.eof())
        {
            break;
        }

        for(int i = 0; i < number_of_gameplays; i++)
        {
            std::cin >> author_university_id >> game_id;
            if((game_id == 0) && (author_university_id == university_id))
            {
                count ++;
            }
        }

        printf("%d\n", count);
    }

    while(std::cin.eof() == false);
    return 0;
}