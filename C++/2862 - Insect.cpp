#include<iostream>

int main()
{
    int test_cases, power_lvl;
    scanf("%d", &test_cases);
    
    for(int i = 0; i < test_cases; i++)
    {
        scanf("%d", &power_lvl);
        if(power_lvl > 8000)
        {
            printf("Mais de 8000!\n");
        }
        else
        {
            printf("Inseto!\n");
        }
    }

    return 0;
}