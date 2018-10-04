#ifndef Animal_h
#define Animal_h
#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    Animal( );
    Animal( int age, string name);
    void setAge( int age );
    void setName( string name );
    int getAge();
    string getName();
protected:
    int age;
    string name;
};

#endif /* Animal_h */
