#ifndef Shape_h
#define Shape_h

#include <iostream>
using namespace std;

class Shape {
public:
    Shape( );
    Shape( double width, double height );
    void setWidth( double width );
    void setHeight( double height );
    double getWidth();
    double getHeight();
    virtual double area( );
protected:
    double width;
    double height;
};

#endif /* Shape_h */
