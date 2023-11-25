#ifndef QUACK_BEHAVIOR_H
#define QUACK_BEHAVIOR_H

#include <memory>

class QuackBehavior {
public:
    virtual std::unique_ptr<QuackBehavior> cloneQuackBehavior() const = 0;

    virtual ~QuackBehavior() { };

    virtual void Quack() = 0;
};

#endif //QUACK_BEHAVIOR_H