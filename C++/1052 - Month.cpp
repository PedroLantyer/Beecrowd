#include<iostream>
#include<vector>

int main()
{
    std::vector<std::string> month = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    int input;
    std::cin >> input;
    std::cout << month[input-1] << std::endl;
    return 0;
}