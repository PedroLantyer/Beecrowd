#include<iostream>

int main()
{
    char alphabet[27];
    int num_of_bulbs, temp;
    std::string word;
    
    while(scanf("%s", alphabet) != EOF)
    {
        scanf("%d", &num_of_bulbs);
        for(int i = 0; i < num_of_bulbs; i++)
        {
            scanf("%d", &temp);
            word += alphabet[temp-1];
        }
        std::cout << word << std::endl;
        word.clear();
    }
    
    return 0;
}