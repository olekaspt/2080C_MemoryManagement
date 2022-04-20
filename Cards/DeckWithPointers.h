#pragma once
#include <list>


//Fwd declaration
class Card;

class DeckWithPointers
{
    public:
        DeckWithPointers();
        virtual ~DeckWithPointers();

        Card * DrawCard();

    private:

        std::list<Card *> m_deck;




};