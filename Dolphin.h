#ifndef Dolphin_h
#define Dolphin_h
#include <iostream>
#include <string>
#include "Animal.h"

class Dolphin : public Animal {
public:
    Dolphin( );
    Dolphin( int age, string name );
    string message();
    void setPOB( string placeOfBirth);
    string getPOB();
private:
    string placeOfBirth;
};

#endif /* Dolphin_h */
