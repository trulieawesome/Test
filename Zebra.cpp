#include "Zebra.h"
#include "Animal.h"
#include <iostream>
#include <string>

Zebra::Zebra() : Animal(0, "") {
    
}

Zebra::Zebra( int age, string name ) {
    this->age = age;
    this->name = name;
}

string Zebra::message() {
    string str_age = to_string(age);
    string message = "Name: " + name + ", Age: " + str_age + ", Place of Birth: " + placeOfBirth;
    return message;
}

void Zebra::setPOB( string placeOfBirth ) {
    this->placeOfBirth = placeOfBirth;
}

string Zebra::getPOB() {
    return placeOfBirth;
}
