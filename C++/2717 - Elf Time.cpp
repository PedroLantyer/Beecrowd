#include <iostream>

int main()
{
    int time_left, time_a, time_b;
    scanf("%d", &time_left);
    scanf("%d %d", &time_a, &time_b);
    
    if((time_a + time_b) <= time_left)
    {
        printf("Farei hoje!\n");
    }
    else
    {
        printf("Deixa para amanha!\n");
    }
    
    return 0;
}