#include <iostream>

void print_first_last()
{
    for(int i=0; i<39; i++)
    {
        printf("-");
    }
    printf("\n");
}

void print_others()
{
    printf("|");
    for(int i=0;i < 37;i++)
    {
        printf(" ");
    }
    printf("|\n");
} 

int main() {
    print_first_last();
    for(int i=0; i<5 ; i++)
    {
        print_others();
    }
    print_first_last();
    return 0;
}