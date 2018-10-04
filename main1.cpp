#include <iostream>
#include "Animal.h"
#include "Dolphin.h"
#include "Zebra.h"
using namespace std;

int main() {
    Zebra *zebra = new Zebra(5, "Stripes");
    Dolphin *dolph = new Dolphin(4, "Blue");
    zebra->setPOB("North America");
    dolph->setPOB("Atlantic Ocean");
    cout << zebra->message() << endl << dolph->message() << endl;
}
