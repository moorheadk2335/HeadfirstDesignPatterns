#ifndef TURKEYS_H
#define TURKEYS_H

#include "Turkey.h"
#include "Duck.h"

#include <iostream>

class WildTurkey : public Turkey {
public:
    void gobble() {
        std::cout << "gobble" << std::endl;
    }

    void fly() {
        std::cout << "I'm flying a short distance" << std::endl;
    }
};

// Class adapter
class DomesticTurkey : private Turkey, public Duck {
public:
    void gobble() override {
        std::cout << "Domesticated gobble" << std::endl;
    }

    void quack() override {
        gobble();
    }

    // Since this is a name collision, we wont have a Duck::fly() that calls Turkey::fly() 5 times,
    // instead, since this is an adapter, we will directlly implement this behavior
    void fly() override {
        for (int i = 0; i < 5; i++) {
            std::cout << "I'm flying a short distance" << std::endl;
        }
    }
};

#endif //TURKEYS_H