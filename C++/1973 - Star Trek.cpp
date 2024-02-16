#include <iostream>
#include <vector>

int main() 
{
    int number_of_stars;
    unsigned long long temp, total_sheep = 0;
    std::vector<unsigned long long> star;
    bool done = false;
    scanf("%d",&number_of_stars);

    for(int i = 0; i < number_of_stars; i++)
    {
        scanf("%llu",&temp);
        total_sheep += temp;
        star.push_back(temp);
    }
    
    int index = 0, max_index=1;
    unsigned long long stolen = 0;
    while(done != true)
    {
        if (index < 0 || index > number_of_stars || star[index] == 0)
        {
            break;
        }
        if(star[index] % 2 == 0)
        {
            star[index]--;
            index --;
            stolen ++;
        }
        else
        {
            star[index]--;
            index++;
            stolen++;
        }
        if(index > (max_index-1) && ((max_index) < number_of_stars))
        {
            max_index++;
        }
    }
    unsigned long long not_stolen = total_sheep - stolen;
    printf("%d %llu\n", (max_index), not_stolen);
    return 0;
}
    /**
     * if number of sheep is even i-1
     * else i+1
     */