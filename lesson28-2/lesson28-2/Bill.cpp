#include "Bill.h"

Bill::Bill(Buy b) :Buy(b)
{

}

void Bill::printBill() const
{
	ofstream file(this->getName() + ".txt");
	if (file.is_open())
	{
		file << "--------------------------------" << endl;
		file << "Name: " << this->getName() << endl;
		file << "Weight: " << this->getWeight() << endl;
		file << "Amount: " << this->getAmount() << endl;
		file << "Cost: " << this->getCost() << endl;
		file << "--------------------------------" << endl;
		file << "Total weight: " << this->calcTotalWeight() << " kg\n";
		cout << "Total cost: " << this->calcTotalCost() << " uah\n";
	}
}
