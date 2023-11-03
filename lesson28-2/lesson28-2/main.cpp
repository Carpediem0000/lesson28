#include "Bill.h"
#include "Buy.h"

int main()
{
	Product a("Meat", 5, 249.9);
	//a.printProd();
	Buy a1(a, 9);
	a1.printBuy();
	Bill d(a1);
	d.printBill();
}