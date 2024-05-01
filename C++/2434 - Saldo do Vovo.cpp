#include <iostream>
#include <cstdio>

int main()
{
	int days, balance, movement_value, lowest;
	scanf("%d %d", &days, &balance);
	lowest = balance;
	std::cin.ignore();
	
	for(int i = 0; i < days; i++)
	{
		scanf("%d", &movement_value);
		balance += movement_value;
		if(balance < lowest)
		{
			lowest = balance;
		}
	}
	
	printf("%d\n", lowest);
	return 0;
}
