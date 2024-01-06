#include <cstdio>
 
int main() {
    int I = 1;
    while (I <= 9)
    {
        int J = 7;
        for(int iter = 0; iter < 3; iter++)
        {
            printf("I=%d J=%d\n",I,J);
            J--;
        }
        I += 2;
    }
    return 0;
}