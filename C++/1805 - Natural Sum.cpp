#include <iostream>

int main()
{
    unsigned long long start_value, end,sum;
    scanf("%llu %llu",&start_value,&end);
    
    if(start_value == end)
    {
        printf("%llu\n",end);
        return 0;
    }
    
    sum = (end*(end+1)/2) - (start_value*(start_value-1)/2);
    printf("%llu\n", sum);
    return 0;
}

//enésimo termo de uma PA: An =A1+(n-1)*r; sendo "a1" o primeiro elemento da PA, "n" o numero de elemento, e "r" a razão
//soma dos elementos de uma PA: (n*(A1+An)/2); sendo "a1" o primeiro elemento da PA, "An" o ultimo termo da PA, e "n" o numero de elementos da PA;