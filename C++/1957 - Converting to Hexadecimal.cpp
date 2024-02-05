#include <iostream>
#include <vector>
#include <string>

std::string get_hex_char(int remainder, std::string hex_string)
{
    char ch;
    if (remainder < 10)
    {
        hex_string += std::to_string(remainder);
        return hex_string;
    }
    //remainder > 10
    ch = (65+remainder-10);
    hex_string += ch;
    return hex_string;
}

std::string fill_string(std::string hex_value,int count)
{
    int delta = count-(int)hex_value.length();
    for(int i = 0; i < delta; i++)
    {
        hex_value += "0";
    }
    return hex_value;
}

std::string reverse_string(std::string str)
{
    int len = str.length()-1;
    std::string temp;
    for(int i = len; i >= 0;i--)
    {
        temp += str[i];
    }
    return temp;
}

int main()
{
    std::string hex_value;
    long num;
    int remainder,count = 1;
    std::cin >> num;
    while(num >= 16)
    {
        remainder = (num%16);
        hex_value = get_hex_char(remainder, hex_value);
        num /= 16;
        count ++;
    }
    remainder = (num%16);
    hex_value = get_hex_char(remainder, hex_value);
    hex_value = reverse_string(hex_value);
    if (count > (int)hex_value.length())
    {
        hex_value = fill_string(hex_value,count);
    }
    std::cout << hex_value << std::endl;
    return 0;
}