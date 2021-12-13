#include "c_Line.h"
#include<iostream>
c_Line::c_Line(int length)
{
	this->length = length;
}

void c_Line::print()
{
	std::cout << this->length << " sm\n";
}

int c_Line::getLine()
{
	return this->length;
}
