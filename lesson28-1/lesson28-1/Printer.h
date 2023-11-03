#pragma once
#include <iostream>
#include <string>
#include<fstream>
using namespace std;

class Printer
{
public:
	static void printText(string text, string fileName, int copy = 1);
};

