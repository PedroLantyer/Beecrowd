#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> names;
    std::string str;

    for(int i = 1; i <= 10; i++)
    {
        std::cin >> str;
        if(i == 3 || i == 7 || i == 9)
        {
            names.push_back(str);
        }
    }
    
    for(int i = 0; i < 3; i++)
    {
        std::cout << names[i] << std::endl;
    }

    return 0;
}