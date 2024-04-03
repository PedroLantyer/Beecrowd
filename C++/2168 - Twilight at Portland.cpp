#include <iostream>
#include <vector>

class City
{
    private:
        int blocksPerLine;
        int lineCount;
        std::vector<std::vector<int>> input = {};
        std::vector<std::vector<char>> results = {};

        void SetLineCount()
        {
            lineCount = (blocksPerLine+1);
        }

    public:
        void SetBlocksPerLine()
        {
            scanf("%d", &blocksPerLine);
            SetLineCount();
        }
        
        void SetInputs()
        {
            int tempInt;
            std::vector<int> tempVect  = {};
            
            for(int i = 0; i < lineCount; i++)
            {
                for(int j = 0; j < lineCount; j++)
                {
                    std::cin >> tempInt;
                    tempVect.push_back(tempInt);
                };
                input.push_back(tempVect);
                tempVect.clear();
            };
        }

        void SetResults()
        {
            std::vector<char> tempVect = {};

            for(int y = 0; y < (blocksPerLine);y++)
            {
                for(int x = 0; x < (blocksPerLine); x++)
                {
                    if((input[y][x] + input[y][x+1] + input[y+1][x] + input[y+1][x+1]) >= 2)
                    {
                        tempVect.push_back('S');
                    }
                    else
                    {
                        tempVect.push_back('U');
                    }
                };
                results.push_back(tempVect);
                tempVect.clear();
            };
        }
        
        void GetResults()
        {
            for(int i = 0; i < blocksPerLine; i++)
            {
                for(int j = 0; j < blocksPerLine; j++)
                {
                    printf("%c", results[i][j]);
                }
                printf("\n");
            }
        }

        City(){};
};

int main()
{
    City cityObj;
    cityObj.SetBlocksPerLine();
    cityObj.SetInputs();
    cityObj.SetResults();
    cityObj.GetResults();
    return 0;
}