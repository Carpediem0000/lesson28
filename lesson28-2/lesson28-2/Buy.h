#pragma once
#include "Product.h"
class Buy: public Product
{
	int amount;

public:
	Buy();
	Buy(string name, double weight, double cost, int amount);
	Buy(Product p, int amount);

	int getAmount()const;
	void setAmount(int amount);

	double calcTotalCost()const;
	double calcTotalWeight()const;

	void printBuy()const;
};

