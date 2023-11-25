#ifndef DUCK_H
#define DUCK_H

#include "QuackBehavior.h"
#include "FlyBehavior.h"

#include <string>
#include <memory>

class Duck {
protected:
    std::string name;

    std::unique_ptr<QuackBehavior> quackBehavior;
    std::unique_ptr<FlyBehavior> flyBehavior;

public:
    Duck(std::string name, std::unique_ptr<QuackBehavior> quackBehavior, std::unique_ptr<FlyBehavior> flyBehavior);
    Duck(const Duck& otherDuck);
    Duck& operator=(Duck& otherDuck);

    void PerformFly();
    void SetFlyBehavior(std::unique_ptr<FlyBehavior> flyBehavior);
    void PerformQuack();
    void SetQuackBehavior(std::unique_ptr<QuackBehavior> quackBehavior);
    void Swim();
};

#endif //DUCK_H