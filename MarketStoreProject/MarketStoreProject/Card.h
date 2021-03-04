#pragma once
#include <string>
using namespace std;

class Card 
{
protected:
	int userID;
	string userName;

	double turnover;
	double discountRate;
	double purchaseAmount;

public:

	Card();
	Card(int, string);
	Card(const Card&);
	virtual ~Card();

	virtual void Purchase(double amount, double turnover);

protected:

	virtual double PurchaseValue(); //returns purchaseAmount - the amount of money spent on the purchase
	virtual double Discount(); //discountRate * purchaseAmount
	virtual double DiscountRate() = 0;
	virtual string CardDescription() = 0; //the type of card, used in the Purchase function

};