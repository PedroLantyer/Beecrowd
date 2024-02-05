#include <iostream>
#include <vector>

void print_answers(std::vector<int> answers)
{
    for(int i = 0; i < (int)answers.size(); i++)
    {
        printf("%d\n", answers[i]);
    }
}

int main()
{
    std::vector<int> answers;
    int a,b,test_cases;
    std::cin >> test_cases;
    for(int i = 0; i < test_cases; i++)
    {
        std::cin >> a >> b;
        answers.push_back((a+b));
    }
    if((int)answers.size() == 0)
    {
        return 0;
    }
    print_answers(answers);
    return 0;
}