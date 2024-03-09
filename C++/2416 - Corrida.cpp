#include <iostream>
#include <cstdio>


int ReturnEndPos(int high, int low)
{
	if((high % low) == 0)
	{
		return 0;
	}
	return (high % low);
}

int main()
{
    int length, travel, high, low;
    scanf("%d %d", &travel, &length);
    
	if(length >= travel)
	{
		high = length;
		low = travel;
    }
    else
	{
		high = travel;
		low = length;
    }
    
    std::cout << ReturnEndPos(high, low) << std::endl;
    return 0;
}
