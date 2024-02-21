#include<iostream>

int main()
{
    int num[] = {0,0,0,0};
    int index;
    
    for(int i = 0; i < 4; i++)
    {
        scanf("%d", &num[i]);
        if(num[i] == 1)
        {
            index = (i+1);
        }
    }

    printf("%d\n", index);
    return 0;
}