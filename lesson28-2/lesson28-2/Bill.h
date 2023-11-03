#pragma once
#include "Buy.h"
#include <fstream>

class Bill: public Buy
{
public:
	Bill(Buy b);

	void printBill()const;
};

