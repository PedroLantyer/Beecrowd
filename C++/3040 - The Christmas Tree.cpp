#include <stdio.h>
#include <iostream>
#include <vector>

std::vector<std::vector<int>> getInputs(int n)
{
    std::vector<std::vector<int>> inputVect;
    std::vector<int> inputTemp;
    int x;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            std::cin >> x;
            inputTemp.push_back(x);
        }
        inputVect.push_back(inputTemp);
        inputTemp.clear();
    }
    return inputVect;
}

bool heightPass(int h)
{
    if(h < 200 || h > 300) {return false;}
    return true;
}

bool diameterPass(int d)
{
    if(d < 50){return false;}
    return true;
}

bool branchPass(int g)
{
    if(g < 150){return false;};
    return true;
}

void printResults(std::vector<std::vector<int>> vect)
{
    int h, d, g;
    for(int i = 0; i < vect.size(); i++)
    {
        h = vect[i][0];
        d = vect[i][1];
        g = vect[i][2];
        
        if((heightPass(h)) && (diameterPass(d)) && (branchPass(g)))
        {
            printf("Sim\n");
        }
        else{printf("Nao\n");}
    }   
}

int main()
{
    int testCases;
    scanf("%d", &testCases);
    std::vector<std::vector<int>> inputs = getInputs(testCases);
    printResults(inputs);
    return 0;
}
