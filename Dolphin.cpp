#include <iostream>
#include <string>
#include "Animal.h"
#include "Dolphin.h"

Dolphin::Dolphin() : Animal(0, ""){
    
}

Dolphin::Dolphin( int age, string name ) {
    this->age = age;
    this->name = name;
}

string Dolphin::message() {
    string str_age = to_string(age);
    string message = "Name: " + name + ", Age: " + str_age + ", Place of Birth: " + placeOfBirth;
    return message;
}

void Dolphin::setPOB( string placeOfBirth ) {
    this->placeOfBirth = placeOfBirth;
}

string Dolphin::getPOB() {
    return placeOfBirth;
}
