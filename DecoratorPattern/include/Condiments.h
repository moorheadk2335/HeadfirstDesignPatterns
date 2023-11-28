#ifndef CONDIMENTS_H
#define CONDIMENTS_H

#include "Beverage.h"
#include "CondimentDecorator.h"

#include <memory>
#include <string>
 
class Mocha : public CondimentDecorator {
public:
    Mocha(std::unique_ptr<Beverage> beverage)
        : CondimentDecorator(std::move(beverage), "Mocha") { };

    virtual float GetCostForSize() override {
        if (beverage->GetSize() == Beverage::TALL) return .15f;
        else if (beverage->GetSize() == Beverage::GRANDE) return .20f;
        else if (beverage->GetSize() == Beverage::VENTI) return .25f;
        else {
            std::cerr << "Unknown size! Charging way too much" << std::endl;
            return 1000.0f;
        }
    };
};

class SteamedMilk : public CondimentDecorator {
public:
    SteamedMilk(std::unique_ptr<Beverage> beverage)
        : CondimentDecorator(std::move(beverage), "Steamed Milk") { }; 

    virtual float GetCostForSize() override {
        if (beverage->GetSize() == Beverage::TALL) return .05f;
        else if (beverage->GetSize() == Beverage::GRANDE) return .10f;
        else if (beverage->GetSize() == Beverage::VENTI) return .15f;
        else {
            std::cerr << "Unknown size! Charging way too much" << std::endl;
            return 1000.0f;
        }
    };
};

class Soy : public CondimentDecorator {
public:
    Soy(std::unique_ptr<Beverage>beverage)
        : CondimentDecorator(std::move(beverage), "Soy") { }; 

    virtual float GetCostForSize() override {
        if (beverage->GetSize() == Beverage::TALL) return .10f;
        else if (beverage->GetSize() == Beverage::GRANDE) return .15f;
        else if (beverage->GetSize() == Beverage::VENTI) return .20f;
        else {
            std::cerr << "Unknown size! Charging way too much" << std::endl;
            return 1000.0f;
        }
    };
};

class Whip : public CondimentDecorator {
public:
    Whip(std::unique_ptr<Beverage>beverage)
        : CondimentDecorator(std::move(beverage), "Whip") { }; 

    virtual float GetCostForSize() override {
        if (GetSize() == Beverage::TALL) return .05f;
        else if (GetSize() == Beverage::GRANDE) return .10f;
        else if (GetSize() == Beverage::VENTI) return .15f;
        else {
            std::cerr << "Unknown size! Charging way too much" << std::endl;
            return 1000.0f;
        }
    };
};

#endif //CONDIMENTS_H