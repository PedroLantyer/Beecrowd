#include <iostream>
#include <string>

int main()
{
    int test_cases, len_a, len_b;
    std::string A, B, sub_str;
    scanf("%d", &test_cases);
    
    for(int i = 0; i < test_cases; i++)
    {
        std::cin >> A >> B;
        len_a = A.size(), len_b = B.size();
        if(len_a < len_b)
        {
            printf("nao encaixa\n");
        }
        else
        {
            sub_str = A.substr((len_a-len_b),len_b);
            if(sub_str == B)
            {
                printf("encaixa\n");
            }
            else
            {
                printf("nao encaixa\n");
            }
        }
    }
    return 0;
}