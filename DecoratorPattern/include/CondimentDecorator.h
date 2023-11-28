#ifndef CONDIMENT_DECORATOR_H
#define CONDIMENT_DECORATOR_H

#include "Beverage.h"

#include <memory>
#include <string>

class CondimentDecorator : public Beverage {
protected:
    std::unique_ptr<Beverage> beverage;

public:
    CondimentDecorator(std::unique_ptr<Beverage> beverage, std::string description)
        : beverage(std::move(beverage)), Beverage(description, beverage->GetSize()) { };
    virtual ~CondimentDecorator() { };

    virtual std::string GetDescription() override {
        return (beverage != nullptr) ? beverage->GetDescription() + ", " + description : description;
    };

    virtual float Cost() override {
        if (beverage == nullptr) {
            std::cerr << "No base drink found, cannot determine cost" << std::endl;   
            return 0.0f;
        }

        return beverage->Cost() + GetCostForSize();
    };

    virtual float GetCostForSize() = 0;
};

#endif //CONDIMENT_DECORATOR_H