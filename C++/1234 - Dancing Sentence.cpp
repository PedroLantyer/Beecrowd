#include <iostream>
#include <string>

bool is_upper(char c)
{
    if (c >= 65 && c <= 90)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool is_lower(char c)
{
    if (c >= 97 && c <= 122)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool is_alpha(char c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    {
        return true;
    }
    else
    {
        return false;
    }
}

char to_upper(char c)
{
    if (is_upper(c))
    {
        return c;
    }
    c -= 32;
    return c;
}

char to_lower(char c)
{
    if (is_lower(c))
    {
        return c;
    }
    c += 32;
    return c;
}

std::string adjust_case(std::string text)
{
    std::string next_op;
    char ch;
    for(int i = 0; i < (int)text.size();i++)
    {
        ch = text[i];
        if (is_alpha(ch))
        {
            if(next_op.empty())
            {
                ch = to_upper(ch);
                next_op = "LOWER";
            }
            else
            {
                if(next_op == "UPPER")
                {
                    ch = to_upper(ch);
                    next_op = "LOWER";
                }
                else if (next_op == "LOWER")
                {
                    ch = to_lower(ch);
                    next_op = "UPPER";
                }
            }
        }
        text[i] = ch;
    }
    return text;
}

int main()
{
    std::string string,text;
    while(std::getline(std::cin,string))
    {
        if (string.empty())
        {
            break;
        }
        text += string;
        text += "\n";
    }
    text = adjust_case(text);
    for(int i = 0; i < (int)text.size(); i++)
    {
        std::cout << text[i];
    }
}