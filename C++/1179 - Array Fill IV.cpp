#include <iostream>
#include <vector>

void print_vector(std::vector<int> vect,std::string vect_name)
{
    for(int i = 0; i < (int)vect.size(); i++)
    {
        printf("%s[%d] = %d\n", vect_name.c_str(), i,vect[i]);
    }
}

int main()
{
    std::vector<int> even, odd;
    int num;
    for(int i = 0; i < 15; i++)
    {
        if(even.size() == 5)
        {
            print_vector(even,"par");
            even.clear();
        }
        if(odd.size() == 5)
        {
            print_vector(odd,"impar");
            odd.clear();
        }
        std::cin >> num;
        if(num % 2 == 0)
        {
            even.push_back(num);
        }
        else
        {
            odd.push_back(num);
        }
    }
    if((int)odd.size() != 0)
    {
        print_vector(odd,"impar");
    }
    if((int)even.size() != 0)
    {
        print_vector(even,"par");
    }
    return 0;
}