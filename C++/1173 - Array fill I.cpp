#include <iostream>
#include <vector>

std::vector<int> build_vector(int num)
{
    std::vector<int> vect;
    while((int)vect.size() < 10)
    {
        vect.push_back(num);
        num *= 2;
    }
    return vect;
}

void print_vector(std::vector<int> vect)
{
    for(int i = 0; i < (int)vect.size(); i++)
    {
        printf("N[%d] = %d\n", i, vect[i]);
    }
}

int main()
{
    int num;
    std::cin >> num;
    std::vector<int> vect = build_vector(num);
    print_vector(vect);
    return 0;
}