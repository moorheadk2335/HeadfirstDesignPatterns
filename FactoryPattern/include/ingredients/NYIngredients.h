#ifndef NY_INGREDIENTS_H
#define NY_INGREDIENTS_H

#include "Ingredients.h"

class ThinCrustDough : public Dough {
public:
    ThinCrustDough() : Dough("Thin Crust Dough") { };
};

class MarinaraSauce : public Sauce {
public:
    MarinaraSauce() : Sauce("Marinara Sauce") { };
};

class ReggianoCheese : public Cheese {
public:
    ReggianoCheese() : Cheese("Reggiano Cheese") { };
};

class FreshClams : public Clams {
public:
    FreshClams() : Clams("Fresh Clams") { };
};

#endif //NY_INGREDIENTS_H