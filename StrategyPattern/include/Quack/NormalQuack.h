#ifndef NORMAL_QUACK_H
#define NORMAL_QUACK_H

#include "QuackBehavior.h"

#include <iostream>
#include <memory>

class NormalQuack : public QuackBehavior {
public:
    virtual std::unique_ptr<QuackBehavior> cloneQuackBehavior() const override {
        return std::make_unique<NormalQuack>(*this);
    };

    void Quack() override {
        std::cout << "Quack" << std::endl;
    };
};

#endif //NORMAL_QUACK_H
