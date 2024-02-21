#include <iostream>
#include <vector>

std::vector<std::vector<int>> create_terrain(int size_x, int size_y)
{
    std::vector<int> temp;
    int num;
    std::vector<std::vector<int>> terrain;

    for(int i = 0; i < size_x; i++)
    {
        for(int j = 0; j < size_y; j++)
        {
            scanf("%d", &num);
            temp.push_back(num);
        }
        terrain.push_back(temp);
        temp.clear();
    }

    return terrain;
}

std::vector<int> get_pos(std::vector<std::vector<int>> terrain)
{
    std::vector<int> pos = {0,0};
    
    for(int x = 1; x < (int)terrain.size()-1; x++)
    {
        for(int y = 1; y < (int)terrain[x].size()-1; y++)
        {
            if(terrain[x][y] == 42)
            {
                if (terrain[x-1][y-1] == 7 && terrain[x-1][y] == 7 && terrain[x-1][y+1] == 7 && 
                    terrain[x][y-1] == 7 && terrain[x][y+1] == 7 &&
                    terrain[x+1][y-1] == 7 && terrain[x+1][y] == 7 && terrain[x+1][y+1] == 7)
                    {
                        pos[0] = (x+1), pos[1] = (y+1);
                        return pos;
                    }
            }
        }
    }

    return pos;
}

int main()
{
    int size_x, size_y;
    scanf("%d %d", &size_x, &size_y);
    
    std::vector<std::vector<int>> terrain = create_terrain(size_x, size_y);
    std::vector<int> pos = get_pos(terrain);
    printf("%d %d\n", pos[0], pos[1]);
    
    return 0;
}