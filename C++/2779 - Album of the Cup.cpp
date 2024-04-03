#include <iostream>
#include <vector>

class Album
{
    private:
        std::vector<bool> cards = {};
        int cardCount;

    public:
        void SetCardCount()
        {
            scanf("%d", &cardCount);
            
            if(cards.size() != 0)
            {
                cards.clear();
            };

            for(int i = 0; i < cardCount; i++)
            {
                cards.push_back(false);
            };
        };

        int GetCardCount()
        {
            return cardCount;
        };

        void AddCard(int num)
        {
            if(!(cards[num-1])) //Add Card if card isn't duplicate
            {
               cards[num-1] = true; 
            };
        };

        int GetMissingCardCount()
        {
            int count = 0;
            for(int i = 0; i < cardCount; i++)
            {
                if(!cards[i])
                {
                    count ++;
                }
            }
            return count;
        }

        Album(){};
};

int main()
{   
    Album albumObj;
    albumObj.SetCardCount();
    
    int cardsBougth;
    scanf("%d", &cardsBougth);
    
    int temp;
    for(int i = 0; i < cardsBougth; i++)
    {
        scanf("%d", &temp);
        albumObj.AddCard(temp);
    }

    printf("%d\n", albumObj.GetMissingCardCount());

    return 0;
}