#include <iostream>
#include <string>
int main()
{
    std::string str;
    unsigned long long ducks;
    do
    {
        std::cin >> str;
        
        //Input receives string then converts to unsigned long long, this is used to prevent underflows and precision errors
        if(str[0] == '-')
        {
            break;
        }
        ducks = strtoull(str.c_str(), nullptr, 10);

        if(ducks > 0)
        {
            ducks--;
        }
        printf("%llu\n", ducks);

    }while(str[0] != '-');
    
    return 0;
}