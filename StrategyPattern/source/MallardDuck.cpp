#include "MallardDuck.h"

#include "FlyWithWings.h"
#include "NormalQuack.h"

MallardDuck::MallardDuck()
    : Duck(
        "mallard",
        std::unique_ptr<NormalQuack>(new NormalQuack()),
        std::unique_ptr<FlyWithWings>(new FlyWithWings()))
{

}
