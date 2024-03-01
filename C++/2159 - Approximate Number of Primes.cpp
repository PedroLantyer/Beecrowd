#include<iostream>
#include<cmath>

int main()
{
     long n;
     double lower_limit, upper_limit;
     scanf("%ld", &n);
     
     lower_limit = n/log(n);
     upper_limit = 1.25506 * (n/log(n));
     printf("%.1lf %.1lf\n", lower_limit, upper_limit);

     return 0;
}