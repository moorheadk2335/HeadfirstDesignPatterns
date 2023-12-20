#include "CaffeineBeverageWithHook.h"

#include <iostream>

using namespace std;

void CaffeineBeverageWithHook::prepareRecipe() {
    boilWater();
    brew();
    pourInCup();
    if (customerWantsCondiments()) {
        addCondiments();
    }
}

void CaffeineBeverageWithHook::boilWater() {
    cout << "Boiling water" << endl;
}

void CaffeineBeverageWithHook::pourInCup() {
    cout << "Pouring into cup" << endl;
}