#ifndef DUCKS_H
#define DUCKS_H

#include "Duck.h"

#include <iostream>

class MallardDuck : public Duck {
public:
    void quack() override {
        std::cout << "quack" << std::endl;
    }

    void fly() override {
        std::cout << "I'm flying" << std::endl;
    }
};

#endif //DUCKS_H