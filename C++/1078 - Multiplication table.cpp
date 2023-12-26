#include <iostream>
#include <cstdio>
 
int main() {
    int n;
    std::cin >> n;
    for(int i = 1; i <=10 ;i++)
    {
        printf("%d x %d = %d\n",i,n,(i*n));
    }
    return 0;
}