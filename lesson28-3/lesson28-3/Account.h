#pragma once
#include <iostream>
using namespace std;

class Account
{
protected:
	double balance;
public:
	Account();
	Account(double balance);

	void topUpCash(double cash);
	void withDrawCash(double cash);

	double getBalance()const;

	void print()const;
};

