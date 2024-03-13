#include <iostream>
#include <cstdio>

int main()
{
	//((N+1)*(N+2))/2
	int n, game_size;
	scanf("%d", &n);
	
	game_size = ((n+1)*(n+2))/2;
	printf("%d\n", game_size);
	
	return 0;
}
