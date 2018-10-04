#ifndef Triangle_h
#define Triangle_h
#include "Shape.h"
#include <iostream>
using namespace std;

class Triangle : public Shape {
public:
    Triangle( );
    Triangle( double width, double height );
    double area( );
};

#endif /* Triangle_h */
