#include "Scanner.h"

Scanner::Scanner()
{
	text = "Empty";
}

string Scanner::getText() const
{
	return text;
}

void Scanner::setText(string text)
{
	this->text = text;
}

bool Scanner::scanText(string fileName)
{
	ifstream file(fileName);
	if (file.is_open())
	{
		string tmp;
		text = "";
		while (!file.eof())
		{
			getline(file, tmp);
			text += tmp + "\n";
		}
		file.close();
		return true;
	}
	return false;
}
