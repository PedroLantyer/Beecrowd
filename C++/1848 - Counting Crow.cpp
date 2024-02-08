#include <iostream>
#include <string>
#include <vector>

int int_pow(int base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }
    
    int result = base;
    for(int i = 1; i < exp; i++)
    {
        result *= base;
    }
    return result;
}

int get_num(std::string input)
{
    int len = input.length(), num = 0;
    for(int i = 0; i < len; i++)
    {
        if (input[i] == '*')
        {
            num += int_pow(2,(len-i-1));
        }
    }
    return num;
}

void print_results(std::vector<int> results)
{
    for(int i = 0; i < (int)results.size(); i++)
    {
        printf("%d\n",results[i]);
    }
}

int main()
{
    std::vector<int> results;
    std::string input;
    int count = 0, sum = 0, num = 0;

    while (count < 3)
    {
        std::getline(std::cin, input);
        if (input == "caw caw")
        {
            count += 1;
            results.push_back(sum);
            sum = 0;
            continue;
        }
        if (input.length() == 3)
        {
            num = get_num(input);
            sum += num;
        }
    }
    print_results(results);
    return 0;
}