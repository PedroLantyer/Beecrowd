#include <iostream>

void print_vals(char a, char b, char c)
{
    printf("A = %c, B = %c, C = %c\n", a, b, c);
}

int main()
{
    char a,b,c;
    scanf("%c %c %c", &a, &b, &c);
    print_vals(a,b,c);
    print_vals(b,c,a);
    print_vals(c,a,b);
    return 0;
}