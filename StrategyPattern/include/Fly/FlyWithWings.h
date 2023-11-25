#ifndef FLY_WITH_WINGS_H
#define FLY_WITH_WINGS_H

#include "FlyBehavior.h"

#include <iostream>
#include <memory>

class FlyWithWings : public FlyBehavior {
public:
    virtual std::unique_ptr<FlyBehavior> cloneFlyBehavior() const override {
        return std::make_unique<FlyWithWings>(*this);
    };

    virtual void Fly() override {
        std::cout << "I'm flying!" << std::endl;
    };
};

#endif //FLY_WITH_WINGS_H