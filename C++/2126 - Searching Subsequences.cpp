#include <iostream>
#include <vector>

std::vector<int> find_subsequence_matches(std::string str1, std::string str2)
{
    std::vector<int> matches = {0,-1}; //MATCHES, POSITION WHERE LAST SUBSEQUENCE STARS;
    int temp = 0;
    int len_one = (int)str1.size();

    for(int i = 0; i < (int)str2.size(); i++)
    {
        for(int j = 0; j < len_one; j++)
        {
            if(str1[j] != str2[i+j])
            {
                break;
            }
            temp ++;
        }
        
        if(temp == len_one)
        {
            matches[0] ++;
            matches[1] = i+1;
            i += (len_one-1);
        }
        temp = 0;
    }
    return matches;
}

int main()
{
    std::string num_one, num_two;
    std::vector<int> matches;
    int count = 1;

    do
    {
        std::cin >> num_one >> num_two;
        if(std::cin.eof())
        {
            break;
        }
        matches = find_subsequence_matches(num_one, num_two);

        printf("Caso #%d:\n", count);
        if(matches[0] == 0)
        {
            printf("Nao existe subsequencia\n\n");
        }
        else
        {
            printf("Qtd.Subsequencias: %d\n", matches[0]);
            printf("Pos: %d\n\n", matches[1]);
        }

        count++;
    }
    while(num_one.length() != 0);

    return 0;
}