#include <cstdio>
#include <iostream>
 
int main() {
    int n, in=0, out=0,x;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> x;
        if ((x >= 10) && (x <= 20))
        {
            in++;
        }
        else
        {
            out++;
        }
    }
    printf("%d in\n%d out\n", in,out);
    return 0;
}