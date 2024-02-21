#include <iostream>

bool check_combination(int upper_limit, int delta)
{
    int notes[] = {2, 5, 10, 20, 50, 100};
    for(int i = 0; i < (upper_limit-1); i++)
    {
        for(int j = (i+1); j < upper_limit; j++)
        {
            if(((notes[i])+(notes[j])) == delta)
            {
                return true;
            }
        }
    }
    return false;
}

bool check_two_bills(int price, int paid)
{
    int delta = (paid-price);
    if(delta < 10)
    {
        if (delta != 7)
        {
            return false;
        }
        return true;
    }
    if(delta < 20)
    {
        return check_combination(3, delta);
    }
    if(delta < 50)
    {
        return check_combination(4, delta);
    }
    if(delta < 100)
    {
        return check_combination(5, delta);
    }
    if(delta > 150)
    {
        return false;
    }
    return check_combination(6,delta);
}

int main()
{
    int price, paid;
    bool possible;

    do
    {
        scanf("%d %d", &price, &paid);
        if (price == 0 && paid == 0)
        {
            break;
        }
        possible = check_two_bills(price,paid);
        if(possible)
        {
            printf("possible\n");
        }
        else
        {
            printf("impossible\n");
        }
    }
    while(price != 0 || paid != 0);

    return 0;
}