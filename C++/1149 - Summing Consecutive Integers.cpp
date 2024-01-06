#include <iostream>

int main()
{
    int a,n,result;
    std::cin >> a;
    do
    {
        std::cin >> n;
    }
    while (n <= 0);
    for (int i = 0; i < n; i++)
    {
        if(i == 0)
        {
            result = a;
        }
        else
        {
            result += a;
        }
        a++;
    }
    std::cout << result << std::endl;
}