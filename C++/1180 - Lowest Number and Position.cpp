#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vect;
    int lowest_pos, low,n,x;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> x;
        vect.push_back(x);
        if(i == 0 ||low > x)
        {
            low = x;
            lowest_pos = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",low,lowest_pos);
    return 0;
}