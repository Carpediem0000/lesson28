#pragma once
#include "Account.h"
class Moneybox: public Account
{
	int procent;
	double cashBack;

public:
	Moneybox(int procent);

	int getProcen()const;
	double getCashBack()const;

	void withDrawCash(double cash);
	void transferCashBack();
	
	void print()const;
};

