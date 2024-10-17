// main.cpp
#include <iostream>
#include "Rectangle.h"

int main() {
    const double LENGTH = 5.0; // Constant for length
    const double WIDTH = 3.0;  // Constant for width

    // Create a Rectangle object
    Rectangle rect(LENGTH, WIDTH);

    // Display area and perimeter
    std::cout << "Area of the rectangle: " << rect.area() << std::endl;
    std::cout << "Perimeter of the rectangle: " << rect.perimeter() << std::endl;

    return 0;
}
