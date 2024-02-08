#include <iostream>
#include <string>
#include <vector>

bool is_upper(char ch)
{
    if (ch >= 65 && ch <= 90)
    {
        return true;
    }
    return false;
}

bool is_lower(char ch)
{
    if (ch >= 97 && ch <= 122)
    {
        return true;
    }
    return false;
}

bool is_alpha(char ch)
{
    if(is_upper(ch) || is_lower(ch))
    {
        return true;
    }
    return false;
}

std::string adjust_string(std::string str)
{
    std::string next = "DOWN";
    bool first_letter_adjusted = false;

    for(int i = 0; i < (int)str.size(); i++)
    {
        if(is_alpha(str[i]))
        {
            if(first_letter_adjusted == false)
            {
                if(is_lower(str[i]))
                {
                    str[i] -= 32;
                }
                first_letter_adjusted = true;
                continue;
            }

            if(next == "DOWN")
            {
                if(is_upper(str[i]))
                {
                    str[i] += 32;
                }
                next = "UP";
                continue;
            }

            if(next == "UP")
            {
                if(is_lower(str[i]))
                {
                    str[i] -= 32;
                }
                next = "DOWN";
            }
        }
    }
    return str;
}

void print_results(std::vector<std::string> strings)
{
    for(int i = 0; i < (int)strings.size(); i++)
    {
        std::cout << strings[i] << std::endl;
    }
}

int main()
{
    std::vector<std::string> strings;
    std::string input;
    while(std::getline(std::cin, input))
    {
        if(input.size() == 0)
        {
            break;
        }
        if((int)input.length() > 0)
        {
            strings.push_back(input);
        }
    }
    for(int i = 0; i < (int)strings.size(); i++)
    {
        strings[i] = adjust_string(strings[i]);
    }
    print_results(strings);
    
    return 0;
}