#include <iostream>
#include <vector>

bool check_pattern(std::vector<int> vect)
{
    bool peak[2] = {false,false}; //TRUE if PEAK, FALSE if VALLEY
    
    if(vect[0] > vect[1])
    {
        peak[0] = true, peak[1] = false;
    }
    else if(vect[0] == vect[1])
    {
        return false;
    }
    else
    {
        peak[0] = false, peak[1] = true;
    }
    for(int i = 2; i < (int)vect.size(); i++)
    {
        peak[0] = peak[1];
        if (vect[i] > vect[i-1])
        {
            peak[1] = true;
        }
        else if(vect[i] < vect[i-1])
        {
            peak[1] = false;
        }
        if(vect[i] == vect[i-1] || peak[0] == peak[1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    /**
     * at each 100m interval there is a peak
     * halfway between each peak (50m) there is a valley
     * measure is considered peak if it's higher than previous measure
     * valley if it's lower'
     */
    int land_measures, num;
    std::vector<int> measures;
    scanf("%d",&land_measures);

    for(int i = 0; i < land_measures; i++)
    {
        scanf("%d", &num);
        measures.push_back(num);
    }

    std::cout << check_pattern(measures) << std::endl;
    return 0;
}