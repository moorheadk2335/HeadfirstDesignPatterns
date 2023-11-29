#ifndef COMMON_INGREDIENTS_H
#define COMMON_INGREDIENTS_H

#include "Ingredients.h"

class Garlic : public Veggies {
public:
    Garlic() : Veggies("Garlic") { };
};

class Mushroom : public Veggies {
public:
    Mushroom() : Veggies("Mushroom") { };
};

class Onion : public Veggies {
public:
    Onion() : Veggies("Onion") { };
};

class RedPepper : public Veggies {
public:
    RedPepper() : Veggies("Red Pepper") { };
};

class Spinach : public Veggies {
public:
    Spinach() : Veggies("Spinach") { };
};

class BlackOlives : public Veggies {
public:
    BlackOlives() : Veggies("Black Olives") { };
};

class SlicedPepperoni : public Pepperoni {
public:
    SlicedPepperoni() : Pepperoni("Sliced Pepperoni") { };
};

#endif //COMMON_INGREDIENTS_H