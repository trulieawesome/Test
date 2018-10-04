#ifndef Zebra_h
#define Zebra_h
#include <iostream>
#include <string>
#include "Animal.h"

class Zebra : public Animal {
public:
    Zebra( );
    Zebra( int age, string name );
    string message();
    void setPOB( string placeOfBirth);
    string getPOB();
private:
    string placeOfBirth;
    
};


#endif /* Zebra_h */
