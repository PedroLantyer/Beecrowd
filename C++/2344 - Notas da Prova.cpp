#include <iostream>

char get_grade(unsigned score)
{
    if (score == 0)
    {
        return 'E';
    }
    if (score >= 1 && score <= 35)
    {
        return 'D';
    }
    if (score >= 36 && score <= 60)
    {
        return 'C';
    }
    if (score >= 61 && score <= 85)
    {
        return 'B';
    }
    return 'A';
}

int main()
{
    unsigned int score;
    std::cin >> score;
    std::cout << get_grade(score) << std::endl;
}