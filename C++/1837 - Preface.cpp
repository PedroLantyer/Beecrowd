#include <iostream>
 

void euclidean_division(int x, int y)
{
    int quotient,remainder,mod_of_y,z;
    
    if (x < 0)
    {
        mod_of_y = y;
        if (mod_of_y < 0)
        {
            mod_of_y = abs(mod_of_y);
        }
        for (remainder = 0; remainder < mod_of_y; remainder++)
        {
            z= x-remainder;
            if (z%y == 0)
            {
                break;
            }
        }
        quotient = z/y;
    }

    else
    {
        quotient = x/y;
        remainder = x%y;
    }

    printf("%d %d\n",quotient,remainder);
} 

int main() {
    int x,y;
    std::cin >> x >> y;
    if (y == 0)
    {
        return 0;
    }
    else 
    {
        euclidean_division(x,y);
    }
    return 0;
}