#include <iostream>
#include <cstdio>
#include <vector>

int main()
{
	std::vector<int> positions = {1,3,5,10,25,50,100};
	int num;
	
	scanf("%d", &num);
	for(int i = 0; i < (int)positions.size(); i++)
	{
		if(num <= positions[i])
		{
			printf("Top %d\n", positions[i]);
			break;
		}
	}
	
	return 0;
}
