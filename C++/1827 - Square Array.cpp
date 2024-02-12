#include <iostream>
#include <vector>

std::vector<std::vector<int>> build_square_array(int n)
{
    std::vector<std::vector<int>> vect;
    std::vector<int> temp;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            temp.push_back(0);
        }
        vect.push_back(temp);
        temp.clear();
    }
    return vect;
}

int get_middle_index(int n)
{
    int middle = (n/2);
    if (n % 2 == 0)
    {
        middle--;
    }
    return middle;
}

std::vector<std::vector<int>> modify_square_array(std::vector<std::vector<int>> vect)
{
    int size = (int)vect.size();
    int middle = get_middle_index(size);
    
    //DIAGONAL PRINCIPAL: ROW = COLLUMN
    for(int i = 0; i < size; i++)
    {
        vect[i][i] = 2;
    }

    //DIAGONAL SECUNDARIA: LINHA AUMENTA, COLUNA REDUZ;
    for(int i = 0; i < size; i++)
    {
        vect[i][size-i-1] = 3;
    }

    //PROXIMOS AO MEIO:
    for(int i = 0; i < size; i++)
    {
        if(i < (size/3) || i > (size - (size/3)-1))
        {
            continue;
        }

        for(int j = 0; j < size; j++)
        {
            if(j < (size/3) || j > (size - (size/3)-1))
            {
                continue;
            }
            vect[i][j] = 1;
        }
    }

    //ELEMENTO CENTRAL: 
    vect[middle][middle] = 4;

    return vect;
}

void print_vector(std::vector<std::vector<int>> vect)
{
    for(int i = 0; i < (int)vect.size(); i++)
    {
        for(int j = 0; j < (int)vect.size(); j++)
        {
            printf("%d",vect[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int size;
    std::vector<std::vector<int>> vect;
    do
    {
        size = 0;
        std::cin >> size;
        if(std::cin.eof())
        {
            break;
        }

        vect = build_square_array(size);
        vect = modify_square_array(vect);
        print_vector(vect);
        printf("\n");
    }
    while(std::cin.eof() == false);
 
    return 0;
}