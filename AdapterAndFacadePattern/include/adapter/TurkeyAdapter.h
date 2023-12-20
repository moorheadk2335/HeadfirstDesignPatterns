#ifndef TURKEY_ADAPTER_H
#define TURKEY_ADAPTER_H

#include "Turkey.h"
#include "Duck.h"

#include <memory>

// Object adapter
class TurkeyAdapter : public Duck {
    std::unique_ptr<Turkey> turkey;
public:
    TurkeyAdapter(std::unique_ptr<Turkey> turkey) : turkey(std::move(turkey)) { }

    void quack() override {
        turkey->gobble();
    }

    void fly() override {
        for (int i = 0; i < 5; i++) {
            turkey->fly();
        }
    }
};

#endif //TURKEY_ADAPTER_H