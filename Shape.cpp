#include <iostream>
#include "Shape.h"
using namespace std;

Shape::Shape() : width(0.0), height(0.0) {
    
}

Shape::Shape( double width, double height ) : width(width), height(height){
    
}

void Shape::setWidth( double width ) {
    this->width = width;
}

void Shape::setHeight( double height ) {
    this->height = height;
}

double Shape::getWidth() {
    return width;
}

double Shape::getHeight() {
    return height;
}

double Shape::area( ) {
    return width*height;
};
