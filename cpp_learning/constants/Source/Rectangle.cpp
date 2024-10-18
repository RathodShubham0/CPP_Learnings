// Rectangle.cpp
#include "Rectangle.h"

// Constructor implementation
Rectangle::Rectangle(double length, double width) : length(length), width(width) {}

// Method to calculate the area
double Rectangle::area() const {
    return length * width;
}

// Method to calculate the perimeter
double Rectangle::perimeter() const {
    return 2 * (length + width);
}
 
