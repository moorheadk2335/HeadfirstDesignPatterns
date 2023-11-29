#include "Pizza.h"

using namespace std;

void Pizza::prepare() {
    cout << "Peparing " << name << endl;
    cout << "Tossing dough..." << endl;
    cout << "Adding sauce..." << endl;
    cout << "Adding toppings: " << endl;
    for (auto topping : toppings) {
        cout << "\t" << topping << endl;
    }
}

std::string Pizza::getName()
{
    return std::string();
}

void Pizza::bake() {
    cout << "Bake for 25 minutes at 350" << endl;
}

void Pizza::cut() {
    cout << "Cutting the pizza into diagonal slices" << endl;
}

void Pizza::box() {
    cout << "Place pizza in official PizzaStore box" << endl;
}