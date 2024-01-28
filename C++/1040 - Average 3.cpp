#include <iostream>
#include <vector>

double get_avg(std::vector<double> scores,bool weigthed)
{
    double sum = 0,result;
    if (weigthed)
    {
        std::vector<int> weigths = {2,3,4,1};
        for(int i = 0; i < (int)scores.size(); i++)
        {
            sum += (scores[i]*weigths[i]);
        }
        result = (sum/10);
    }
    else
    {
        for(int i = 0; i < (int)scores.size(); i++)
        {
            sum += scores[i];
        }
        result = (sum/(int)scores.size());
    }
    return result;
}

bool get_has_exam(double avg)
{
    if (avg >= 7)
    {
        printf("Aluno aprovado.\n");
        return false;
    }
    else if (avg < 5)
    {
        printf("Aluno reprovado.\n");
        return false;
    }
    else
    {
        printf("Aluno em exame.\n");
        return true;
    }
}

void get_exam_result(double avg)
{
    double exam_score,final_score;
    std::cin >> exam_score;
    std::vector<double> scores_2 = {avg,exam_score};
    final_score = get_avg(scores_2,false);
    printf("Nota do exame: %.1f\n", exam_score);
    if(final_score >= 5)
    {
        printf("Aluno aprovado.\n");
    }
    else
    {
        printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1f\n",final_score);
}

int main()
{
    std::vector<double> scores;
    double num;
    
    for(int i = 0; i < 4; i++)
    {
        std::cin >> num;
        scores.push_back(num);
    }
    double avg = get_avg(scores,true);
    printf("Media: %.1f\n",avg);

    bool has_exam = get_has_exam(avg);
    if(has_exam)
    {
        get_exam_result(avg);
    }
    return 0;
}