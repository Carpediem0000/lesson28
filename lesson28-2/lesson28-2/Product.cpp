#include "Product.h"

Product::Product()
{
    this->name = "Undefine";
    this->cost = 0;
    this->weight = 0;
}

Product::Product(string name, double weight, double cost)
{
    this->name = name;
    this->cost = cost;
    this->weight = weight;
}

double Product::getCost() const
{
    return cost;
}

string Product::getName() const
{
    return name;
}

double Product::getWeight() const
{
    return weight;
}

void Product::setCost(double cost)
{
    this->cost = cost;
}

void Product::setName(string name)
{
    this->name = name;
}

void Product::setWeight(double weight)
{
    this->weight = weight;
}

void Product::printProd() const
{
    cout << "\tProduct\n";
    cout << "Name: " << name << endl;
    cout << "Weight: " << weight << " kg" << endl;
    cout << "Cost: " << cost << " uah" << endl;
}
