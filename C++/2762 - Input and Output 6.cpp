#include<iostream>
#include<string>

void get_reverse_str(std::string str)
{
    std::size_t index = str.find('.');
    std::string str_part1 = str.substr(0, index);
    std::string str_part2 = str.substr(index+1);
    int part1 = std::stoi(str_part2);
    std::cout << part1 << '.' << str_part1 << std::endl;
}

int main()
{
    std::string str;
    std::cin >> str;
    get_reverse_str(str);
    return 0;
}