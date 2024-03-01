#include <iostream>

bool CheckIsZero(std::string regular_number, int str_size)
{
    if(str_size == 0)
    {
        return true;
    }

    long long num = strtoll(regular_number.c_str(), nullptr, 10);
    if (num == 0)
    {
        return true;
    }
    return false;
}

std::string RemoveAdditionalZeroes(std::string regular_number, int str_size)
{
    for(int i = 0; i < str_size; i++)
    {
        if (regular_number[i] == '0')
        {
            regular_number.erase(i,1);
            i--;
            str_size--;
        }
        else
        {
            break;
        }
    }
    return regular_number;
}

std::string GetContractValue(char broken_digit, std::string regular_number)
{
    int str_size = regular_number.size();
    for(int i = 0; i < str_size; i++)
    {
        if(regular_number[i] == broken_digit)
        {
            regular_number.erase(i,1);
            str_size --;
            i --;
        }
    }
    bool is_zero = CheckIsZero(regular_number, str_size);
    if (is_zero)
    {
        return "0";
    }
    regular_number = RemoveAdditionalZeroes(regular_number, str_size);
    return regular_number;
}

int main()
{
    char broken_digit;
    std::string regular_number, contract_value;
    do
    {
        std::cin >> broken_digit >> regular_number;
        if (broken_digit == '0' && regular_number == "0")
        {
            break;
        }
        contract_value = GetContractValue(broken_digit, regular_number);
        std::cout << contract_value << std::endl;
    }
    while(broken_digit != '0');
    return 0;
}