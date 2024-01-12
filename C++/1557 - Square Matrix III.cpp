#include <iostream>
#include <string>
#include <iomanip>

int times_two(int num, int repeats)
{
    int result = num;
    for(int i = 0; i < repeats; i++)
    {
        result *= 2;
    }
    return result;
}

int get_size_t(int x)
{
    int a = times_two(1,(x-1));
    int b = times_two(a,(x-1));
    std::string str1 = std::to_string(b);
    int len = str1.length();
    return len;
}

void square_matrix(int size, int size_t)
{
    int first_value = 1,num;
    for(int i = 1; i <= size; i++)
    {
        num = first_value;
        for (int j = 1; j <= size; j++)
        {
            if (j == 1)
            {
                std::cout << std::setw(size_t) << std::right << num;
            }
            else
            {
                std::cout << std::setw(size_t+1) << std::right << num;
            }
            num *= 2;
            if (j == size)
            {
                printf("\n");
            }
        }
        first_value *= 2;
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
            printf("1\n");
        }
        else
        {
            int size_t = get_size_t(x);
            square_matrix(x,size_t);
        }
        printf("\n");
    }
    while (x != 0);
}