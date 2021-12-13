#pragma once
#include "c_Line.h"; 
#include "c_Rectangle.h";
class c_Square
{
	int size;
public:
	c_Square(int);
	int getSize();

	c_Rectangle operator+(c_Line line) {
		return c_Rectangle(this->size + line.getLine(),this->size );
	}

};

