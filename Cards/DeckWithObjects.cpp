#include "DeckWithObjects.h"
#include <iostream>

DeckWithObjects::DeckWithObjects()
{
    for(int i = 1 ; i <=2; i++)
    {
        this->m_deck.push_back(std::move(Card(i,0)));
        this->m_deck.push_back(std::move(Card(i,1)));
        this->m_deck.push_back(std::move(Card(i,2)));
        this->m_deck.push_back(std::move(Card(i,3)));
    }
}
DeckWithObjects::~DeckWithObjects()
{
    std::cout << "Deleting DeckWithObjects"  << std::endl;
    m_deck.clear();
}

Card DeckWithObjects::DrawCard()
{

    if (!m_deck.empty())
    {
        Card c = std::move(m_deck.front());
        m_deck.pop_front();
        return std::move(c);
    }
    else
    {
        throw std::exception("Deck not empty");
    }

}

void DeckWithObjects::ReturnCard(Card c)
{
    m_deck.push_back(std::move(c));
}

void DeckWithObjects::PrintDeck()
{
    auto it1queue = std::make_move_iterator(m_deck.begin());
    auto it1queue_end = std::make_move_iterator(m_deck.end());
    for (int i = 0; it1queue != it1queue_end; it1queue++)
    {
        std::cout << it1queue->GetSuit() << " " << it1queue->GetValue() << " " << std::endl;
    }
    std::cout << std::endl;

}
