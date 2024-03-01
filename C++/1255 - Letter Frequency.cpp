#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::vector<int> BuildVector() //FILL VECTOR WITH 0s, EACH VALUE HOLDS THE FREQUENCY FOR EACH CHAR IN THE ALPHABET
{
    std::vector<int> vect;
    for(int i = 0; i < 26; i++)
    {
        vect.push_back(0);
    }
    return vect;
}

std::string GetHighestChars(std::vector<int> frequency)
{
    std::vector<int> max_pos;
    int max_value = 0;

    for(int i = 0; i < (int)frequency.size(); i++) //DETERMINE WHICH CHARS THAT APPEAR MORE FREQUENTLY
    {
        if(frequency[i] > max_value)
        {
            max_pos.clear();
            max_value = frequency[i];
            max_pos.push_back(i);
        }
        else if (frequency[i] == max_value)
        {
            max_pos.push_back(i);
        }
    }

    std::string res = "";
    for(int i = 0; i < (int)max_pos.size(); i++) //GET THE CHARS FOR THE ELEMENTS THAT ARE MORE FREQUENT
    {
        res += (char)(max_pos[i]+97);
    }
    
    if((int)res.size() > 1) //SORT THE CHARS IN ALPHABETICAL ORDER
    {
        std::sort(res.begin(),res.end());
    }

    return res;
}

std::string GetFrequencyOfLetters(std::string text)
{
    std::vector<int> frequency = BuildVector();
    
    for(int i = 0; i < (int)text.size(); i++) //DETERMINE HOW FREQUENT EACH LETTER IS
    {
        if(text[i] >= 65 && text[i] <= 90)
        {
            frequency[(int)text[i]-65] ++; 
        }
        else if(text[i] >= 97 && text[i] <= 122)
        {
            frequency[(int)text[i]-97] ++;
        }
    }

    return GetHighestChars(frequency);
}

int main()
{
    int test_cases;
    scanf("%d", &test_cases);
    std::cin.ignore();
    
    std::string text, result;
    for(int i = 0; i < test_cases; i++)
    {
        std::getline(std::cin, text);
        std::cout << GetFrequencyOfLetters(text) << std::endl;
    }
    
    return 0;
}