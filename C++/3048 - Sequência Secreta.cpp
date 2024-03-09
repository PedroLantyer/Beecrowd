#include <iostream>
#include <cstdio>
#include <vector>

std::vector<int> BuildVector(int size)
{
	std::vector<int> vect;
	int num;
	for(int i = 0; i < size; i++)
	{
		scanf("%d", &num);
		vect.push_back(num);
	}
	return vect;
}

int GetAnswer(std::vector<int> vect)
{
	int size = (int)vect.size();
	
	if(size <= 1)
	{
		return size;
	}
	
	int answer = 1;
	int previous = 0;
	for(int i = 1; i < size; i++)
	{
		previous = vect[i-1];
		if(vect[i] != previous)
		{
			answer++;
		}
	}

	return answer;
}

int main()
{
    int sequence_size;
    scanf("%d", &sequence_size);
    std::vector<int> sequence = BuildVector(sequence_size);
	int answer = GetAnswer(sequence);
    printf("%d\n", answer);
    return 0;
}
