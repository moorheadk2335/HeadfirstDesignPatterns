#include "CaffeineBeverage.h"
#include "CaffeineBeverageWithHook.h"
#include "Coffee.h"
#include "CoffeeWithHook.h"
#include "Tea.h"

#include <iostream>

using namespace std;

void caffeineBeverageTestDriver(CaffeineBeverage &beverage) {
    cout << "Testing " << beverage.getName() << endl;
    beverage.prepareRecipe();
    cout << endl;
}

void caffeineBeverageWithHookTestDriver(CaffeineBeverageWithHook &beverage) {
    cout << "Testing " << beverage.getName() << endl;
    beverage.prepareRecipe();
    cout << endl;
}

int main() {
    Coffee coffee;
    caffeineBeverageTestDriver(coffee);

    Tea tea;
    caffeineBeverageTestDriver(tea);

    CoffeeWithHook coffeWithHook;
    caffeineBeverageWithHookTestDriver(coffeWithHook);    
}