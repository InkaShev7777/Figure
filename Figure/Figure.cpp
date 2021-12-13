#include <iostream>
#include "c_Line.h"
#include "c_Rectangle.h"
#include "c_Square.h"
int main()
{
    c_Square c_square(10);
    c_Line c_line(22);
    c_Rectangle c_rectangle = c_square + c_line;
    c_rectangle.print();
    
}

