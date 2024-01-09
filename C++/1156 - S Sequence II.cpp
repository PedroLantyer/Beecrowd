#include <cstdio>

int main()
{
    int x=3, y=2;
    double s = 1.0;
    while(x <= 39)
    {
        s += (x/double(y));
        x += 2;
        y *= 2;
    }
    printf("%.2f\n",s);
    return 0;
}