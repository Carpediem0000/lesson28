#include "Buy.h"

Buy::Buy()
{
    this->amount = 0;
}

Buy::Buy(string name, double weight, double cost, int amount)
    :Product(name, weight, cost)
{
    this->amount = amount;
}

Buy::Buy(Product p, int amount)
    :Product(p)
{
    /*this->setName(p.getName());
    this->setWeight(p.getWeight());
    this->setCost(p.getCost());*/
    this->amount = amount;
}

int Buy::getAmount() const
{
    return amount;
}

void Buy::setAmount(int amount)
{
    this->amount = amount;
}

double Buy::calcTotalCost() const
{
    return this->amount * getCost();
}

double Buy::calcTotalWeight() const
{
    return this->amount * getWeight();
}

void Buy::printBuy() const
{
    Product::printProd();
    cout << "Total weight: " << calcTotalWeight() << " kg\n";
    cout << "Total cost: " << calcTotalCost() << " uah\n";
}
