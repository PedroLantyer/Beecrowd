#include<iostream>

int main()
{
    int test_cases;
    double time;
    std::string word;
    
    scanf("%d", &test_cases);
    for(int i = 0; i < test_cases; i++)
    {
        std::cin >> word;
        time = (word.size()/100.00);
        printf("%.2lf\n",time);
    }

    return 0;
}