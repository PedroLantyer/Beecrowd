#include <iostream>

int main()
{
    std::string binary_value;
    int count = 0;
    std::cin >> binary_value;
    
    for(int i = 0; i < (int)binary_value.length(); i++)
    {
        if(binary_value[i] == '1')
        {
            count++;
        }
    }
    
    if(count %2 == 0)
    {
        binary_value += '0';
    }
    else
    {
        binary_value += '1';
    }

    std::cout << binary_value << std::endl;
    return 0;
}