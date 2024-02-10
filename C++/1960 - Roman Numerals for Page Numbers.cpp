#include <iostream>
#include <vector>

int main() 
{
    std::vector<std::string> unidade = {"I","II","III","IV","V","VI","VII","VIII","IX"};
    std::vector<std::string> dezena = {"X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    std::vector<std::string> centena = {"C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    
    int number,temp;
    std::cin >> number;
    std::string result;
    
    if(number >= 100)
    {
        temp = (number/100);
        result += centena[temp-1];
        number -= (temp*100);
    }
    if(number >= 10)
    {
        temp = (number/10);
        result += dezena[temp-1];
        number -= (temp*10);
    }
    if(number >= 1)
    {
        result += unidade[number-1];
    }

    std::cout << result << std::endl;
    return 0;
}