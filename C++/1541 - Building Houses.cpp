#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> get_vect()
{
    int num;
    std::vector<int> vect;
    for(int i = 0; i < 3; i++)
    {
        std::cin >> num;
        if(num == 0)
        {
            vect.clear();
            return vect;
        }
        vect.push_back(num);
    }
    return vect;
}

int get_land_size(int a, int b, int c)
{
    int area = a*b;
    int land = std::trunc(sqrt((area*100)/c));
    return land; 
}

int main()
{
    bool done = false;
    std::vector<int> values;
    while(done != true)
    {
       values = get_vect();
       if((int)values.size() == 0)
       {
            break;
       }
       std::cout << get_land_size(values[0],values[1],values[2]) << std::endl;
       values.clear();
    }
    return 0;
}