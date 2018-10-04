#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Triangle.h"

int main() {
    Shape *triangle = new Triangle(10,20);
    Shape *rectangle = new Rectangle(10,20);
    cout << "Triangle Area = " << triangle->area() << endl;
    cout << "Rectangle Area = " << rectangle->area() << endl;
}
