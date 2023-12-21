#include <iostream>
 
int main() {
    int n;
    std::cin >> n;
    if (n != 0)
    {
        for(int i = 1; i <= 10000; i++)
        {
            if(i % n == 2)
            {
                std::cout << i << std::endl;
            }
        }
    }
    return 0;
}