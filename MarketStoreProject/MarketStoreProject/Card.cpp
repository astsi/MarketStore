#include "Card.h"
#include <iostream>


Card::Card()
{
	this->userID = -1;
	this->userName = "Default Name";
	this->discountRate = 0;
	this->turnover = 0;
	this->purchaseAmount = 0;

}

Card::Card(int id, string name)
{
	this->userID = id;
	this->userName = name;
	this->discountRate = 0;
	this->turnover = 0;
	this->purchaseAmount = 0;

}

Card::Card(const Card& card)
{
	this->userID = card.userID;
	this->userName = card.userName;
	this->discountRate = card.discountRate;
	this->turnover = card.turnover;
	this->purchaseAmount = card.purchaseAmount;

}

Card::~Card()
{
}

double Card::PurchaseValue()
{
	return this->purchaseAmount;
}

double Card::Discount()
{
	return this->purchaseAmount * this->discountRate / 100;
}

void Card::Purchase(double amount, double turnover)
{
	this->turnover = turnover;
	this->purchaseAmount = amount;

	cout << "Card Owner: " << this->userName <<"\t";
	cout << "Card ID: " << this->userID <<" \n\n";
	cout << "Card Type: " << this->CardDescription() << " \n";
	cout << "Turnover: " << this->turnover << "\n";
	cout << "Purchase value: $";
	cout << PurchaseValue() << "\n";
	cout << "Discount rate: ";
	cout << DiscountRate() << "%" << " \n";
	cout << "Discount: $";
	cout << Discount() << "\n";
	cout << "Total: $";
	cout << PurchaseValue() - Discount();
	cout << "\n\n";
}



