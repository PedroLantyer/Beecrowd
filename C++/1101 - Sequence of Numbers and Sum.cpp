#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
 
void sequence_and_sum(std::vector<int> vect1)
{
    int sum = 0;
    std::sort(vect1.begin(),vect1.end());
    for (int i = vect1[0]; i <=vect1[1] ; i++)
    {
        std::cout << i << " ";
        sum += i;
    }
    printf("Sum=%d\n",sum);
}

int main() {
    int x=1,y=1;

    while (x > 0 && y > 0)
    {
        std::cin >> x >> y;
        if (x <= 0 || y <= 0)
        {
            break;
        }
        std::vector<int> vect1 = {x,y};
        sequence_and_sum(vect1);
    }

    return 0;
}