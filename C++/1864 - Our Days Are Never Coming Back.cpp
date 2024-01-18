#include <iostream>

int main()
{
    std::string text= "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int n;
    std::cin >> n;
    for (int i=0; i < n; i++)
    {
        std::cout << text[i];
    }
    printf("\n");
    return 0;
}