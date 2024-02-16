#include <iostream>
#include <string>

int main()
{
    std::string text;
    std::getline(std::cin, text);
    if(text.length() > 140)
    {
        text = "MUTE";
    }
    else
    {
        text = "TWEET";
    }
    std::cout << text << std::endl;
}