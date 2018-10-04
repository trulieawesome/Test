#include "Triangle.h"
#include "Shape.h"
#include <iostream>
using namespace std;

Triangle::Triangle() : Shape() {
    
}

Triangle::Triangle( double width, double height ) {
    this->width = width;
    this->height = height;
}

double Triangle::area() {
    return 0.5*width*height;
}

