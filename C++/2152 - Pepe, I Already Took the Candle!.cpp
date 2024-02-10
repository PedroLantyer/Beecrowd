#include <iostream>
#include <iomanip>

int main()
{
    int hour, minute, test_cases;
    bool open;
    scanf("%d",&test_cases);

    for(int i = 0; i < test_cases; i++)
    {
        std::cin >> hour >> minute >> open;
        std::cout << std::setw(2) << std::setfill('0') << hour << ":";
        std::cout << std::setw(2) << std::setfill('0') << minute;
        if (open)
        {
            printf(" - A porta abriu!\n");
        }
        else
        {
            printf(" - A porta fechou!\n");
        }
    }
}