#ifndef FLY_BEHAVIOR_H
#define FLY_BEHAVIOR_H

#include <memory>

class FlyBehavior {
public:
    virtual std::unique_ptr<FlyBehavior> cloneFlyBehavior() const = 0;

    virtual ~FlyBehavior() { };

    virtual void Fly() = 0;
};

#endif //FLY_BEHAVIOR_H