#include<iostream>

double get_FP(int repeat_count)
{
    double FP = 0;
    for(int i = 0; i < repeat_count; i ++)
    {
        FP += 2;
        FP = (1.0/FP);
    }
    return FP;
}

int main()
{
    int repeat_count;
    scanf("%d", &repeat_count);

    double FP = get_FP(repeat_count);
    printf("%.10lf\n", (1+FP));
    return 0;
}