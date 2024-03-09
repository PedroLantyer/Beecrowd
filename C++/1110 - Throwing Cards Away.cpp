#include<iostream>
#include<vector>

std::vector<int> BuildDeck(int deck_size)
{
    std::vector<int> deck;
    
    for(int i = 1; i <= deck_size; i++) //INSERT CARDS INTO DECK
    {
        deck.push_back(i);
    }

    return deck;
}

void PrintResponse(int card_left, std::vector<int> discarded)
{
    printf("Discarded cards:");
    if(discarded.empty())
    {
        printf("\n");
    }
    else
    {
        int size = (int)discarded.size();

        for(int i = 0; i < (size-1); i++)
        {
            printf(" %d,", discarded[i]);
        }
        printf(" %d\n", discarded[size-1]); //FINAL POSITION ISN'T IN LOOP DUE TO HOW THE OUTPUT IS PRESENTED
    }

    printf("Remaining card: %d\n", card_left);
}

void ThrowCardsAway(std::vector<int> deck)
{
    std::vector<int> discarded;
    
    if((int)deck.size() == 1)
    {
        PrintResponse(1, discarded);
        return; //USED TO BREAK OUT OF VOID FUNCTION
    }
    
    while((int)deck.size() > 1)
    {
        discarded.push_back(deck[0]);
        deck.erase(deck.begin()); //THROWS AWAY CARD AT THE TOP
        
        if((int)deck.size() <= 1)
        {
            break;
        }

        deck.push_back(deck[0]); //THROW CARD THAT IS ON THE TOP OF THE CARD TO THE BOTTOM
        deck.erase(deck.begin()); //AS TOP CARD WAS MOVED THE DUPLICATE IS REMOVED
    }

    PrintResponse(deck[0],discarded);
}

int main()
{
    int deck_size;
    std::vector<int> deck, discarded_cards;
    do
    {
        scanf("%d", &deck_size); //GET DECK SIZE
        if(deck_size == 0)
        {
            break;
        }

        deck = BuildDeck(deck_size);
        ThrowCardsAway(deck);
    }
    while(deck_size != 0);

    return 0;
}