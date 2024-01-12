#include <iostream>

int main()
{
    std::string name;
    int test_cases, newtons;
    std::cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        std::cin >> name >> newtons;
        if (name == "Thor")
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }
}