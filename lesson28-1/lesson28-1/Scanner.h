#pragma once
#include <iostream>
#include <string>
#include<fstream>
using namespace std;

class Scanner
{
protected:
	string text;
public:
	Scanner();

	string getText()const;

	void setText(string text);

	bool scanText(string fileName);
};

