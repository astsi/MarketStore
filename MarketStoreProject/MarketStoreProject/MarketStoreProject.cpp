
#include <iostream>
#include "Card.h"
#include "BronzeCard.h"
#include "GoldCard.h"
#include "SilverCard.h"

using namespace std;

void main()
{

    BronzeCard* bronze = new BronzeCard(1, "Anna");
    SilverCard* silver = new SilverCard(2, "Johanna");
    GoldCard* gold = new GoldCard(3, "Gordanna");

    bronze->Purchase(150, 0); //150 - purchase value, 0 - turnover
    silver->Purchase(850, 600);
    gold->Purchase(1300, 1500);

}

