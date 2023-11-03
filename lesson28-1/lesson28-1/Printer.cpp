#include "Printer.h"

void Printer::printText(string text, string fileName, int copy)
{
	for (int i = 0; i < copy; i++)
	{
		ofstream file("copy"+to_string(i+1)+fileName);
		if (file.is_open())
		{
			file << text;
			file.close();
		}
	}
	cout << "Printed: " << copy << " copies\n";
}
