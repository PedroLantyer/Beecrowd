#include<iostream>
#include<vector>
#include<algorithm>

int get_best_outcome(int employees[])
{
    std::vector<int> results = {0,0,0};
    //FLOOR 1
    results[0] = (employees[1]*2 + employees[2]*4);
    //FLOOR 2
    results[1] = (employees[0]*2 + employees[2]*2);
    //FLOOR 3
    results[2] = (employees[0]*4 + employees[1]*2);
    std::sort(results.begin(),results.end());
    return results[0];
}

int main()
{
    int employees[] = {0,0,0};
    scanf("%d %d %d", &employees[0], &employees[1], &employees[2]);
    std::cout << get_best_outcome(employees) << std::endl;
    return 0;
}