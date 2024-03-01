#include <iostream>

int main()
{
    int grade_one, grade_two, avg;
    
    scanf("%d", &grade_one);
    scanf("%d", &avg);
    
    grade_two = ((2*avg)-grade_one);
    printf("%d\n",grade_two);

    return 0;
}

/*
M = (A+B)/2 <=>
2M = A+B <=>
2M - A = B <=>
*/