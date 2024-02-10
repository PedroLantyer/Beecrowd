#include <iostream>
#include <vector>
#include <string>

std::vector<int> get_passwords()
{
    std::vector<int> passwords;
    std::string pass;
    int num;
    do
    {
        std::cin >> pass;
        if(std::cin.eof())
        {
            break;
        }
        num = std::stoi(pass);
        num -= 1;
        passwords.push_back(num);
    }
    while(std::cin.eof() == false);
    return passwords;
}

void get_results(std::vector<int> passwords)
{
    for(int i = 0; i < (int)passwords.size(); i++)
    {
        printf("%d\n",passwords[i]);
    }
}

int main()
{
    
    std::vector<int> passwords;
    passwords = get_passwords();
    get_results(passwords);
    return 0;
}