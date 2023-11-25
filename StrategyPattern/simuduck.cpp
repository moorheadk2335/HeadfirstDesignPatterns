#include "Duck.h"
#include "MallardDuck.h"

#include "FlyNoWay.h"
#include "MuteQuack.h"

#include <iostream>

using namespace std;

int main() {
    cout << "Simulating ducks" << endl;

    Duck mallard = MallardDuck();
    
    mallard.PerformFly();
    mallard.PerformQuack();

    cout << "Killing the duck" << endl;

    mallard.SetFlyBehavior(std::unique_ptr<FlyNoWay>(new FlyNoWay()));
    mallard.SetQuackBehavior(std::unique_ptr<MuteQuack>(new MuteQuack));

    mallard.PerformFly();
    mallard.PerformQuack();

    return 0;
}