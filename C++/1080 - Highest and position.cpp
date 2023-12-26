#include <iostream>
#include <algorithm>
#include <vector>

int find_position(int value, std::vector<int> vect1)
{
    int length,position;
    position = -1;
    length = vect1.size();
    for(int i = 0; i < length; i++)
    {
        if (vect1[i] == value)
        {
            position = (i+1);
            break;
        }
    }
    return position;
}

int main()
{
    std::vector <int> vect1;
    int x,position;
    for(int i = 0; i < 100; i++)
    {
        std::cin >> x;
        vect1.push_back(x);
    }
    int max = *std::max_element(vect1.begin(),vect1.end());
    position = find_position(max,vect1);
    std::cout << max << std::endl << position << std::endl;
    return 0;
}