#include <iostream>
#include <vector>

std::vector<int> reset_temp_to_zero()
{
    std::vector<int> temp = {0,0};
    return temp;
}

std::vector<std::vector<int>> create_vectors(int test_cases)
{
    int x;
    std::vector<std::vector<int>> results;
    std::vector<int> temp = {0,0};
    for (int i = 0; i < test_cases; i++)
    {
        std::cin >> x;
        if (results.empty())
        {
            temp[0] = x;
            temp[1] = 1;
            results.push_back(temp);
            temp = reset_temp_to_zero();
        }
        else
        {
            temp = reset_temp_to_zero();
            int len = results.size(); 
            for(int j = 0; j < len; j++)
            {
                if(x < results[0][0])
                {
                    temp[0] = x;
                    temp[1] = 1;
                    results.insert(results.begin(),temp);
                    break;
                }
                if(x == results[j][0])
                {
                    results[j][1] += 1;
                    break;
                }
                if (x > results[j][0])
                {
                    temp[0] = x;
                    temp[1] = 1;
                    if (j < (len-1))
                    {
                        if (x < results[j+1][0])
                        {
                            results.insert(results.begin()+j+1,temp);
                            break;
                        }
                    }
                    else
                    {
                        results.push_back(temp);
                        break;
                    }
                }

            }
        }
    }
    return results;
}

void print_results(std::vector<std::vector<int>> results)
{
    for(int i = 0; i < (int)results.size(); i++)
    {
        printf("%d aparece %d vez(es)\n",results[i][0],results[i][1]);
    }
}

int main()
{
    std::vector<std::vector<int>> results;
    int test_cases;
    std::cin >> test_cases;
    results = create_vectors(test_cases);
    print_results(results);
}