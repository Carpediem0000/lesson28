#pragma once
#include "Scanner.h"
#include "Printer.h"

class MFU: public Scanner, public Printer
{
public:
	void copyText(string fileName, int copy = 1);
};

