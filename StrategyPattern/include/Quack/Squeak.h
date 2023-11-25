#ifndef SQUEAK_H
#define SQUEAK_H

#include "QuackBehavior.h"

#include <iostream>
#include <memory>

class Squeak : public QuackBehavior {
public:
    virtual std::unique_ptr<QuackBehavior> cloneQuackBehavior() const override {
        return std::make_unique<Squeak>(*this);
    };

    void Quack() override {
        std::cout << "Squeak" << std::endl;
    };
};

#endif //SQUEAK_H