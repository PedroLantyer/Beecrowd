#include <iostream>
#include <iomanip>

void square_matrix(int size)
{
    int collumn,row;

    for (collumn = 1; collumn <= size; collumn++)
    {
        row = collumn;
        int modifier = -1;

        if (collumn == 1)
        {
            for (int i = 1; i <= size; i++)
            {   
                if (i == 1)
                {
                    std::cout << std::setw(3) << std::right << i;
                }
                if (i != 1)
                {
                    std::cout << std::setw(4) << std::right << i;
                }
                if (i == size)
                {
                    printf("\n");
                }
            }
        }

        else
        {
            for (int i = 1; i <= size; i++)
            {   
                if (i == 1)
                {
                    std::cout << std::setw(3) << std::right << row;
                }
                if (i != 1)
                {
                    std::cout << std::setw(4) << std::right << row;
                }
                if (i == size)
                {
                    printf("\n");
                    break;
                }
                row += modifier;
                if(row == 1)
                {
                    modifier = 1;
                }
            }
        }
    }
}

int main()
{
    int x;
    do
    {
        std::cin >> x;
        if (x == 0)
        {
            break;
        }
        if (x == 1)
        {
            printf("  1\n");
        }
        else
        {
            square_matrix(x);
        }
        printf("\n");
    }
    while(x != 0);
    return 0;
}