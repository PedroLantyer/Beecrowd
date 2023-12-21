#include <iostream>
#include <cmath>
#include <cstdio>
 
int main() {
    int n;
    std::cin >> n;
    for(int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            int squared = pow(i,2);
            printf("%d^2 = %d\n",i,squared);
        }
    }
    return 0;
}