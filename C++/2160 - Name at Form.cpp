#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::getline(std::cin, name);
    if(name.length() > 80)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;
}