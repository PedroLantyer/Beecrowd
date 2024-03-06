#include <cstdio>
#include <iostream>

int main()
{
	int competitors, purchased, used;
	scanf("%d %d %d", &competitors, &purchased, &used);

	if((competitors * used) <= purchased)
	{
		printf("S\n");	
	}
	else
	{
		printf("N\n");
	}
	
	return 0;
}
