#include "Rectangle.h"
#include "Shape.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle( ) : Shape( ) {
    
}

Rectangle::Rectangle( double width, double height) {
    this->width = width;
    this->height = height;
}
