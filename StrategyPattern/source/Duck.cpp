#include "Duck.h"

#include <iostream>

using namespace std;

Duck::Duck(std::string name, unique_ptr<QuackBehavior> quackBehavior, unique_ptr<FlyBehavior> flyBehavior)
    : name(name),
    quackBehavior(std::move(quackBehavior)),
    flyBehavior(std::move(flyBehavior))
{
    cout << "I'm a " << name << " duck." << endl;
}

Duck::Duck(const Duck &otherDuck)
    : name(otherDuck.name),
    quackBehavior(otherDuck.quackBehavior->cloneQuackBehavior()),
    flyBehavior(otherDuck.flyBehavior->cloneFlyBehavior())
{
}

Duck &Duck::operator=(Duck &otherDuck)
{
    name = otherDuck.name;
    quackBehavior = otherDuck.quackBehavior->cloneQuackBehavior();
    flyBehavior = otherDuck.flyBehavior->cloneFlyBehavior();

    return *this;
}

void Duck::PerformFly()
{
    if (!flyBehavior) {
        cout << "No flying behavior has been set...." << endl;
        return;
    }

    flyBehavior->Fly();
}

void Duck::SetFlyBehavior(std::unique_ptr<FlyBehavior> newFlyBehavior)
{
    flyBehavior = std::move(newFlyBehavior);
}

void Duck::PerformQuack()
{
    if (!quackBehavior) {
        cout << "No quack behavior has been set...." << endl;
        return;
    }

    quackBehavior->Quack();
}

void Duck::SetQuackBehavior(std::unique_ptr<QuackBehavior> newQuackBehavior)
{
    quackBehavior = std::move(newQuackBehavior);
}

void Duck::Swim()
{
    std::cout << "All ducks float, even decoys!" << std::endl;
}