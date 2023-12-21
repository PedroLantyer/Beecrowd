#include <iostream>
#include <vector>

std::vector<int> build_vector(int n)
{
    int x;
    std::vector<int> vector1;
    for(int i = 0; i < n; i++)
    {
        std::cin >> x;
        vector1.push_back(x);
    }
    return vector1;
}

void print_results(int n, std::vector<int> vector1)
{
    for(int i = 0; i < n; i++)
    {
        if (vector1[i] == 0)
        {
            std::cout << "NULL\n";
        }
        else
        {
            if(vector1[i] % 2 == 0)
            {
                std::cout << "EVEN ";
            }
            else
            {
                std::cout << "ODD ";
            }
            if (vector1[i] > 0)
            {
                std::cout << "POSITIVE\n";
            }
            else
            {
                std::cout << "NEGATIVE\n";
            }
        }
    }
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vector1 = build_vector(n);
    print_results(n,vector1);
    return 0;
}