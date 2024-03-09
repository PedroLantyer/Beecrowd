#include <iostream>
#include <cstdio>

int main()
{
	int test_cases;
	scanf("%d", &test_cases);
	std::cin.ignore();
	
	int time, speed, result = 0;
	for(int i = 0; i < test_cases; i++)
	{
		scanf("%d %d",&time, &speed);
		result += (time*speed);
	}
	printf("%d\n", result);
	return 0;
}
