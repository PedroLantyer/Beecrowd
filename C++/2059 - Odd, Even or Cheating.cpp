#include <iostream>

int get_result(bool p, int sum)
{
    if(p)
    {
        if(sum % 2 == 0)
        {
            return 1;
        }
        return 2;
    }

    if(sum % 2 != 0)
    {
        return 1;
    }
    return 2;
}

int main()
{
    bool p,r,a;
    int j1,j2,winner_num = 0;
    
    std::cin >> p >> j1 >> j2 >> r >> a;
    int sum = (j1+j2);

    if(a)
    {
        if(r)
        {
            winner_num = 2;
        }
        else
        {
            winner_num = 1;
        }
    }
    else if ((a == false) && r)
    {
        winner_num = 1;
    }
    else
    {
        winner_num = get_result(p,sum);
    }

    printf("Jogador %d ganha!\n",winner_num);
    return 0;
}