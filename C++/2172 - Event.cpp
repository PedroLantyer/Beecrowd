#include <iostream>
 
int main()
{
    int increase;
    long long base_exp;  
    
    do
    {
        scanf("%d %lld", &increase, &base_exp);
        if(increase == 0 && base_exp == 0)
        {
            break;
        }
        printf("%lld\n", (base_exp * increase));
    }
    while(base_exp != 0 && increase != 0);

    return 0;
}