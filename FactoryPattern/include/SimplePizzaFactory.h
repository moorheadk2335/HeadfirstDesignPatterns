#ifndef SIMPLE_PIZZA_FACTORY_H
#define SIMPLE_PIZZA_FACTORY_H

#include "Pizza.h"

#include <string>
#include <memory>

class SimplePizzaFactory {
public:
    std::unique_ptr<Pizza> createPizza(std::string type);
};

#endif //SIMPLE_PIZZA_FACTORY_H