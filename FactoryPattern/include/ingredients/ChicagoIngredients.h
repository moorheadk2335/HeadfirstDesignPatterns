#ifndef CHICAGO_INGREDIENTS_H
#define CHICAGO_INGREDIENTS_H

#include "Ingredients.h"

class ThickCrustDough : public Dough {
public:
    ThickCrustDough() : Dough("Thick Crust Dough") { };
};

class PlumTomatoSauce : public Sauce {
public:
    PlumTomatoSauce() : Sauce("Plum Tomato Sauce") { };
};

class MozzarellaCheese : public Cheese {
public:
    MozzarellaCheese() : Cheese("Mozzarella Cheese") { };
};

class FrozenClams : public Clams {
public:
    FrozenClams() : Clams("Frozen Clams") { };
};

class Eggplant : public Veggies {
public:
    Eggplant() : Veggies("Eggplant") { };
};

#endif //CHICAGO_INGREDIENTS_H