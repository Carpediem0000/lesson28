#include "MFU.h"

void MFU::copyText(string fileName, int copy)
{
	if (scanText(fileName)) {
		cout << "Scanned text:" << this->text << endl;
		printText(this->text, fileName, copy);
	}
	else
		cout << "Copy error...\n";

}
