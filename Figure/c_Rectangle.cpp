#include "c_Rectangle.h"
#include <iostream>
c_Rectangle::c_Rectangle(int length, int height)
{
	this->height = height;
	this->length = length;
}

void c_Rectangle::print()
{
	std::cout << "Length: " << this->length << "\tHeight: " << this->height << "\n";
}
