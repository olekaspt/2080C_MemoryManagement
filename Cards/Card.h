#pragma once

class Card

{

	public:
		Card(int value, int suit);
		Card() = delete; // no default constructor
		virtual ~Card() ;

		Card( const Card &c);
		Card& operator=(const Card& c);
		int GetValue() const ;
		int GetSuit() const ;


		Card(Card && obj);
		Card& operator=(Card&& obj);


	private:
		int m_value;
		int m_suit;
		int m_guid;
		

};