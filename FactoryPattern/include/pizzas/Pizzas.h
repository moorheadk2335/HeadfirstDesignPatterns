#ifndef PIZZAS_H
#define PIZZAS_H

#include "Pizza.h"

#include <iostream>

class CheesePizza : public Pizza {
public:
    CheesePizza()
     : Pizza(
        "Cheese Pizza",
        "Hand Tossed Dough",
        "Tomato Sauce",
        {"Shredded Mozzarella Cheese"}) { };
};

class PepperoniPizza : public Pizza {
public:
    PepperoniPizza()
     : Pizza(
        "Pepperoni Pizza",
        "Hand Tossed Dough",
        "Tomato Sauce",
        {"Shredded Mozzarella Cheese", "Sliced Pepperoni"}) { };
};

class ClamPizza : public Pizza {
public:
    ClamPizza()
     : Pizza(
        "Clam Pizza",
        "Hand Tossed Dough",
        "Tomato Sauce",
        {"Shredded Mozzarella Cheese", "Suspicious Clams"}) { };
};

class VeggiePizza : public Pizza {
public:
    VeggiePizza()
     : Pizza(
        "Veggie Pizza",
        "Hand Tossed Dough",
        "Tomato Sauce",
        {"Shredded Mozzarella Cheese", "Black Olivies", "Sun Dried Tomatoes", "Feta Cheese"}) { };
};

#endif //PIZZAS_H