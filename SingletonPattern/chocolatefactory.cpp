#include "ChocolateBoiler.h"

#include <iostream>

using namespace std;

int main() {
    ChocolateBoiler &boilerReference1 = ChocolateBoiler::getInstance();
    boilerReference1.fill();
    boilerReference1.boil();

    ChocolateBoiler &boilerReference2 = ChocolateBoiler::getInstance();
    boilerReference2.fill();
    boilerReference2.boil();
    boilerReference2.drain();

    boilerReference1.drain();
}