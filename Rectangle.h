#ifndef Rectangle_h
#define Rectangle_h
#include <iostream>
#include "Shape.h"

class Rectangle : public Shape {
public:
    Rectangle( );
    Rectangle( double width, double height );
};

#endif /* Rectangle_h */
