#ifndef BEVERAGES_H
#define BEVERAGES_H

#include "Beverage.h"

class Espresso : public Beverage {
public:
    Espresso(Beverage::Size size) : Beverage("Espresso", size) { };

    virtual float Cost() override {
        return 1.99f;
    };
};

class HouseBlend : public Beverage {
public:
    HouseBlend(Beverage::Size size) : Beverage("House Blend Coffee", size) { };

    virtual float Cost() override {
        return .89f;
    };
};

class DarkRoast : public Beverage {
public:
    DarkRoast(Beverage::Size size) : Beverage("Dark Roast", size) { };

    virtual float Cost() override {
        return .99f;
    };
};

class Decaf : public Beverage {
public:
    Decaf(Beverage::Size size) : Beverage("Decaf", size) { };

    virtual float Cost() override {
        return 1.05f;
    };
};

#endif //BEVERAGES_H