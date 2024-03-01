#include <iostream>
#include <string>

std::string GetWord(std::string text)
{
    bool next_space_found = true;
    std::string word = "";

    for(int i = 0; i < (int)text.size(); i++)
    {
        if(text[i] != ' ' && next_space_found)
        {
            word += text[i];
            next_space_found = false;
        }
        else if(text[i] == ' ')
        {
            next_space_found = true;
        }
    }

    return word;
}

int main()
{
    int test_cases;
    scanf("%d", &test_cases);
    std::cin.ignore();

    std::string word;
    std::string text;
    for(int i = 0; i < test_cases; i++)
    {
        std::getline(std::cin, text);
        word = GetWord(text);
        if((int)word.size() != 0)
        {
            std::cout << word;
        }
        printf("\n");
    }
    
    return 0;
}