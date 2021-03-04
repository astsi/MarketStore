#pragma once
#include "Card.h"

class BronzeCard : public Card
{
public:

	BronzeCard();
	BronzeCard(int id, string name);
	BronzeCard(const BronzeCard&);
	~BronzeCard();

protected:
	// Inherited via Card
	virtual double DiscountRate() override;


	// Inherited via Card
	virtual string CardDescription() override;

};