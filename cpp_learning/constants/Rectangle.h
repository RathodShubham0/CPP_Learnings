// Rectangle.h
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
public:
    // Constructor that initializes length and width
    Rectangle(double length, double width);

    // Method to calculate the area of the rectangle
    double area() const;

    // Method to calculate the perimeter of the rectangle
    double perimeter() const;

private:
    const double length; // Length of the rectangle
    const double width;  // Width of the rectangle
};

#endif // RECTANGLE_H
