#include <iostream>
#include <vector>
#include <cstdio>

std::vector<int> getInput(int inputCount)
{
    std::vector<int> inputVect;
    int x;
    for(int i = 0; i < inputCount; i++)
    {
        std::cin >> x;
        inputVect.push_back(x);
	}
    return inputVect;
}
 
double getResult(std::vector<int> vect)
{
    int distance = vect[0];
    int sumOfDiameters = 0;
    for(int i = 1; i < vect.size(); i++)
    {
        sumOfDiameters += vect[i];
    }
    double result = distance/(float)sumOfDiameters;
    return result;
}
 
int main() {
    std::vector<int> inputs = getInput(3);
    double result = getResult(inputs);
    printf("%.2f\n", result);
    return 0;
}