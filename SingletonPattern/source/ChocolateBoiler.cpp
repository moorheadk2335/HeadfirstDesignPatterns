#include "ChocolateBoiler.h"

#include <iostream>

using namespace std;

void ChocolateBoiler::fill() {
    if (!isEmpty()) {
        cout << "Boiler is not empty, cannot fill" << endl;
        return;
    }

    // Fill the boiler with a milk/chocolate mixture
    empty = false;
    boiled = false;
}

void ChocolateBoiler::drain() {
    if (isEmpty() || !isBoiled()) {
        cout << "Boiler is empty or not yet boiling, cannot drain" << endl;
        return;
    }
    
    // drain the boiled milk and chocolate
    empty = true;
}

void ChocolateBoiler::boil() {
    if (isEmpty() || isBoiled()) {
        cout << "Boiler is empty or is boiling, cannot boil" << endl;
        return;
    }

    // bring the contents to a boil
    boiled = true;    
}