#pragma once
#include <iostream>
#include <string>
using namespace std;
class Product
{
	double cost;
	string name;
	double weight;

public:
	Product();
	Product(string name, double weight, double cost);

	double getCost()const;
	string getName()const;
	double getWeight()const;

	void setCost(double cost);
	void setName(string name);
	void setWeight(double weight);

	void printProd()const;
};

