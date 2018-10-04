#include "Animal.h"
#include <iostream>
using namespace std;

Animal::Animal() : age(0), name("") {
    
}

Animal::Animal( int age, string name ) : age(age), name(name) {
    
}

void Animal::setAge(int age) {
    this->age = age;
}

void Animal::setName(string name) {
    this->name = name;
}

int Animal::getAge() {
    return age;
}

string Animal::getName() {
    return name;
}
