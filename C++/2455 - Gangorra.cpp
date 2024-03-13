#include <iostream>
#include <cstdio>

int main()
{
	int weight_one, weight_two, length_one, length_two;
	scanf("%d %d %d %d", &weight_one, &length_one, &weight_two, &length_two);
	
	int kid_one, kid_two;
	kid_one = weight_one * length_one;
	kid_two = weight_two * length_two;
	
	if(kid_one == kid_two)
	{
		printf("0\n");
	}
	else if (kid_one > kid_two)
	{
		printf("-1\n");
	}
	else
	{
		printf("1\n");
	}
	
	return 0;
}
