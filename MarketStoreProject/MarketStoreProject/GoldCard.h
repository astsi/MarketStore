#pragma once
#include "Card.h"

class GoldCard : public Card
{
public:

	GoldCard();
	GoldCard(int id, string name);
	GoldCard(const GoldCard&);
	~GoldCard();

protected:
	// Inherited via Card
	virtual double DiscountRate() override;

	// Inherited via Card
	virtual string CardDescription() override;
};