#include "Deposit.h"
#include "Moneybox.h"

int main()
{
	Account a(10000);
	a.print();
	a.withDrawCash(750.89);
	a.print();
	cout << "=============================\n";

	Moneybox a1(50);

	a1.topUpCash(1000);
	a1.withDrawCash(750);
	a1.print();
	a1.transferCashBack();
	a1.print();

	cout << "=============================\n";
}