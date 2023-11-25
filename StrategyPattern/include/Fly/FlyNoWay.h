#ifndef FLY_NO_WAY_H
#define FLY_NO_WAY_H

#include "FlyBehavior.h"

#include <iostream>
#include <memory>

class FlyNoWay : public FlyBehavior {
public:
    virtual std::unique_ptr<FlyBehavior> cloneFlyBehavior() const override {
        return std::make_unique<FlyNoWay>(*this);
    };

    void Fly() override {
        std::cout << "I can't fly" << std::endl;
    }
};

#endif //FLY_NO_WAY_H