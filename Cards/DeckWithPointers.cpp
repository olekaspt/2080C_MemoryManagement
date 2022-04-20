#include "DeckWithPointers.h"
#include "Card.h"
#include "PersonWithObjects.h"
#include "DeckWithObjects.h"
#include <iostream>

DeckWithPointers::DeckWithPointers()
{

    for(int i = 1 ; i <=13; i++)
    {
        this->m_deck.push_back(new Card(i,0));
        this->m_deck.push_back(new Card(i,1));
        this->m_deck.push_back(new Card(i,2));
        this->m_deck.push_back(new Card(i,3));
    }

}
DeckWithPointers::~DeckWithPointers()
{
    std::cout<<"DeckWithPointers Destructor Called"<<std::endl;	
    for(auto it = m_deck.begin(); it != m_deck.end(); it++)
    {
        delete *it;
    }
}

Card * DeckWithPointers::DrawCard()
{   
    Card * retVal = nullptr;

    if(!m_deck.empty())
    {
        retVal = m_deck.front();
        m_deck.pop_front();
    }
    return retVal;
}