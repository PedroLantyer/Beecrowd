#include <iostream>

bool IsVowel(char ch)
{
    switch (ch)
    {
    case 'a': return true;
    case 'e': return true;
    case 'i': return true;
    case 'o': return true;
    case 'u': return true;
    default: break;
    }
    return false;
}

bool IsPalindrome (std::string str)
{
    int str_size = (int)str.size();
    
    for(int i = 0; i < str_size; i++)
    {
        if(str[i] != str[str_size-i-1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    std::string laugh;
    std::cin >> laugh;

    std::string vowel_sequence = "";
    for(int i = 0; i < (int)laugh.size(); i++)
    {
        if(IsVowel(laugh[i]))
        {
            vowel_sequence += laugh[i];
        }
    }

    if(IsPalindrome(vowel_sequence))
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }

    return 0;
}