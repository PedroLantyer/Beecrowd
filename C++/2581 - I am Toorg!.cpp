#include <iostream>
#include <string>

int main()
{
    std::string question;
    int test_cases;
    
    scanf("%d", &test_cases);
    std::cin.ignore();
    
    for(int i = 0; i < test_cases; i++)
    {
        std::getline(std::cin, question);
        printf("I am Toorg!\n");
    }

    return 0;
}