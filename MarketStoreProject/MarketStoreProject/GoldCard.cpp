#include "GoldCard.h"

GoldCard::GoldCard() : Card()
{
}

GoldCard::GoldCard(int id, string name) : Card(id, name)
{
}

GoldCard::GoldCard(const GoldCard& card) : Card(card)
{
}

GoldCard::~GoldCard()
{
}

double GoldCard::DiscountRate()
{
	discountRate = 2.0;


	if (turnover > 0)
	{
		int temp = turnover / 100;  //how many hundreds of dollars were spent by the customer
		if (temp > 8)
			discountRate = 10.0;
		else discountRate += temp;
	}

	return discountRate;
}

string GoldCard::CardDescription()
{
	return "Gold";
}
