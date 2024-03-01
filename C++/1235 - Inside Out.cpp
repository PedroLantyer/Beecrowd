#include <iostream>
#include <string>
#include <fstream>

std::string Unscramble(std::string text, int first_half_end, int second_half_begin)
{
    std::string unscrambled_text = "";
    
    //FIRST HALF
    for(int i = first_half_end; i >= 0; i--)
    {
        unscrambled_text += text[i];
    }

    //SECOND HALF
    for(int i = (int)text.size()-1; i >= second_half_begin; i--)
    {
        unscrambled_text += text[i];
    }
    
    return unscrambled_text;
}

int main()
{
    int test_cases, first_half_end, second_half_begin;
    std::string text;

    scanf("%d", &test_cases);
    std::cin.ignore();
    for(int i = 0; i < test_cases; i++)
    {
        std::getline(std::cin, text);
        second_half_begin = ((int)text.size()/2); //STRING HAS EVEN NUMBER OF CHARS
        first_half_end = (second_half_begin-1);
        text = Unscramble(text, first_half_end, second_half_begin);
        std::cout << text << std::endl;
    }

    return 0;   
}