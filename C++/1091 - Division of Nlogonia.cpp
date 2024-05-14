#include <iostream>

class Border
{
    private:
        int divX, divY;

    public:
        Border() = default;

        void SetBorder(int x, int y)
        {
            divX = x, divY = y;
        }
        
        std::string GetTerritory(int cordX, int cordY)
        {
            if(cordX == divX || cordY == divY)
            {
                return "divisa";
            }

            if(cordX < divX)
            {
                if(cordY > divY)
                {
                    return "NO";
                }
                return "SO";
            }

            if(cordY > divY) //if (cordX > divX)
            {
                return "NE";
            }
            return "SE";
        }
};

int main()
{
    Border border;
    int queries, x, y, cordX, cordY;
    do
    {
        scanf("%d", &queries);
        if(queries == 0)
        {
            break;
        }

        scanf("%d %d", &x, &y);
        border.SetBorder(x, y);

        for(int i = 0; i < queries; i++)
        {
            scanf("%d %d", &cordX, &cordY);
            std::cout << border.GetTerritory(cordX, cordY) << std::endl;
        }
    }
    while(queries != 0);
    
    return 0;
}