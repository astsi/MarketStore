#include "BronzeCard.h"
#include <iostream>

BronzeCard::BronzeCard() : Card()
{
}

BronzeCard::BronzeCard(int id, string name) : Card(id, name)
{

}

BronzeCard::BronzeCard(const BronzeCard& bcard) : Card(bcard)
{
}

BronzeCard::~BronzeCard()
{
}

double BronzeCard::DiscountRate()
{
    if (turnover > 300)
        discountRate = 2.5;

    else if (turnover > 100)
        discountRate = 1.0;

    else discountRate = 0.0;

    return discountRate;
}

string BronzeCard::CardDescription()
{
    return "Bronze";
}



