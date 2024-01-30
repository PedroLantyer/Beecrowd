#include <iostream>
#include <vector>

bool get_has_vertebra()
{
    std::string input;
    std::cin >> input;
    if(input == "vertebrado")
    {
        return true;
    }
    return false;
}

std::string get_animal(bool has_vertebra)
{
    std::string data1,data2;
    std::cin >> data1 >> data2;
    if (has_vertebra)
    {
        if(data1 == "ave")
        {
            if(data2 == "carnivoro")
            {
                return "aguia";
            }
            if(data2 == "onivoro")
            {
                return "pomba";
            }
            return "N/A";
        }
        if(data1 == "mamifero")
        {
            if(data2 == "onivoro")
            {
                return "homem";
            }
            if(data2 == "herbivoro")
            {
                return "vaca";
            }
            return "N/A";
        }
    }
    else
    {
        if(data1 == "inseto")
        {
            if(data2 == "hematofago")
            {
                return "pulga";
            }
            if(data2 == "herbivoro")
            {
                return "lagarta";
            }
            return "N/A";
        }
        if(data1 == "anelideo")
        {
            if(data2 == "hematofago")
            {
                return "sanguessuga";
            }
            if(data2 == "onivoro")
            {
                return "minhoca";
            }
            return "N/A";
        }
    }
    return "N/A";
}

int main()
{

    bool has_vertebra = get_has_vertebra();
    std::cout << get_animal(has_vertebra) << std::endl;
    return 0;
}