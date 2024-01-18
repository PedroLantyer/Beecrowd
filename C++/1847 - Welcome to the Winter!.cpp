#include <iostream>
#include <vector>
 
std::string compare(std::vector <int> days)
{
    std::string happy = ":)", sad = ":(";
    if (days[0] > days[1]) //DECREASED FROM DAY 1 TO DAY 2
    {
        if (days[1] > days[2]) // DECREASED FROM DAY 2 TO DAY 3
        {
            int temp_decrease_1 = (days[0]-days[1]), temp_decrease_2 =(days[1]-days[2]);
            if (temp_decrease_2 < temp_decrease_1)
            {
                //COND 5
                return happy;
            }
            else
            {
                //COND 6
                return sad;
            }
        }
        else // INCREASED OR REMAINED CONSTANT FROM DAY 2 TO DAY 3
        {
            //COND 1
            return happy;
        }
    }

    else if (days[0] < days[1]) //INCREASED FROM DAY 1 TO DAY 2
    {
        if (days[1] >= days[2]) // DECREASED OR REMAINED CONSTANT FROM DAY 2 TO DAY 3
        {
            //COND 2
            return sad;
        }

        else if (days[1] < days[2])
        {
            int temp_increase_1 = (days[1]-days[0]), temp_increase_2=(days[2]-days[1]);
            if (temp_increase_2 < temp_increase_1)
            {
                //COND 3
                return sad;
            }
            else
            {
                //COND 4
                return happy;
            }
        }
    }

    else //REMAINED CONSTANT FROM DAY 1 TO DAY 2
    {
        if (days[1] < days[2]) //INCREASED FROM DAY 2 TO DAY 3
        {
            //COND 7
            return happy;
        }
        else
        {
            //COND 7
            return sad;
        }
    }
    return "error";
}

int main() {
    std::vector <int> days;
    int x;
    for (int i = 0; i < 3; i++)
    {
        std::cin >> x;
        days.push_back(x);
    }
    std::cout << compare(days) << std::endl;
    return 0;
}

//COND 1:
//If the temperature decreased from the 1st to the 2nd day, but increased or remained constant from the 2nd to the 3rd, the people are happy (first figure).

//COND 2:
//If the temperature increased from the 1st to the 2nd day, but decreased or remained constant from the 2nd to the 3rd, the people are sad (second figure).

//COND 3
/*
If the temperature increased from the 1st to the 2nd day and from the 2nd to the 3rd,
but increased from the 2nd to the 3rd less than what had increased from the 1st to the 2nd, the people are sad (third figure).
*/

//COND 4
/*
If the  temperature increased from the 1st to the 2nd day and from the 2nd to the 3rd,
but increased from the 2nd to the 3rd at least what had increased from the 1st to the 2nd, the people are happy (fourth figure).
*/

//COND 5
/*
If the temperature decreased from the 1st to the 2nd day and from the 2nd to the 3rd,
but decreased from the 2nd to the 3rd less than what had decreased from the 1st to the 2nd, the people are happy (fifth figure).
*/

//COND 6
/*
If the temperature decreased from the 1st to the 2nd day and from the 2nd to the 3rd,
but decreased from the 2nd to the 3rd at least what had decreased from the 1st to the 2nd, the people are sad (sixth figure).
*/

//COND 7
/*
If the temperature remained constant from the 1st to the 2nd day, the people are happy if the temperature increased from the 2nd to the 3rd or sad otherwise (respectively, seventh and eighth figures).
*/