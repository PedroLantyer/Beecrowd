#include <iostream>
#include <vector>
#include <string>

int get_animal_type()
{
    std::vector<std::string> animal_type = {"ave", "mamifero", "inseto", "anelideo"};
    std::string input;
    std::cin >> input;

    for(int i = 0; i < (int)animal_type.size(); i++)
    {
        if (input == animal_type[i])
        {
            return i;
        }
    }

    return -1;
}

int get_has_vertebra()
{
    std::string input;
    std::cin >> input;

    if(input == "invertebrado")
    {
        return 0;
    }
    if(input == "vertebrado")
    {
        return 1;
    }

    return -1;
}

int get_feeding_type()
{
    std::vector<std::string> feeding_type = {"carnivoro", "onivoro", "herbivoro", "hematofago"};
    std::string input;
    std::cin >> input;

    for(int i = 0; i < (int)feeding_type.size(); i++)
    {
        if(input == feeding_type[i])
        {
            return i;
        }
    }
    return -1;
}

std::string get_species(std::string combination)
{
    std::vector<std::vector<std::string>> species = {{"022","lagarta"}, {"023","pulga"}, {"031","minhoca"}, {"033","sanguessuga"}, {"100","aguia"}, {"101","pomba"}, {"111","homem"}, {"112","vaca"}};
    for(int i = 0; i < (int)species.size(); i++)
    {
        if(combination == species[i][0])
        {
            return species[i][1];
        }
    }
    return "N/A";
}

int main()
{
    std::string combination = "";

    int has_vertebra = get_has_vertebra();
    if(has_vertebra == -1)
    {
        return 1;
    }
    combination += std::to_string(has_vertebra);

    int animal_type = get_animal_type();
    if (animal_type == -1)
    {
        return 1;
    }
    combination += std::to_string(animal_type);
    
    int feeding_type = get_feeding_type();
    if(feeding_type == -1)
    {
        return 1;
    }
    combination += std::to_string(feeding_type);

    std::cout << get_species(combination) << std::endl;
    return 0;
}