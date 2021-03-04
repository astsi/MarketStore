#pragma once
#include "Card.h"

class SilverCard : public Card 
{
public:

	SilverCard();
	SilverCard(int id, string name);
	SilverCard(const SilverCard&);
	~SilverCard();

protected:
	// Inherited via Card
	virtual double DiscountRate() override;

	// Inherited via Card
	virtual string CardDescription() override;
};