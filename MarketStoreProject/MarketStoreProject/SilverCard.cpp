#include "SilverCard.h"

SilverCard::SilverCard() : Card()
{
}

SilverCard::SilverCard(int id, string name) : Card(id,name)
{
}

SilverCard::SilverCard(const SilverCard& card) : Card(card)
{
}

SilverCard::~SilverCard()
{
}

double SilverCard::DiscountRate()
{
    if (turnover > 300)
        discountRate = 3.5;

    else discountRate = 2.0;

    return discountRate;
}

string SilverCard::CardDescription()
{
    return "Silver";
}
