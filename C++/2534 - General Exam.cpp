#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

int main()
{
    int citizens, queries, temp, pos;
    std::vector<int> scores;
    
    while(scanf("%d %d", &citizens, &queries) != EOF)
    {
        for(int i = 0; i < citizens; i++)
        {
            scanf("%d", &temp);
            scores.push_back(temp);
        }
        std::sort(scores.begin(),scores.end(),std::greater<int>());

        for(int i = 0; i < queries; i++)
        {
            scanf("%d", &pos);
            printf("%d\n", scores[pos-1]);
        }
        scores.clear();
    }

    return 0;
}