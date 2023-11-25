#ifndef MUTE_QUACK_H
#define MUTE_QUACK_H

#include "QuackBehavior.h"

#include <iostream>
#include <memory>

class MuteQuack : public QuackBehavior {
public:
    virtual std::unique_ptr<QuackBehavior> cloneQuackBehavior() const override {
        return std::make_unique<MuteQuack>(*this);
    }

    void Quack() override {
        std::cout << "<< Silent >>" << std::endl;
    };
};

#endif //MUTE_QUACK_H