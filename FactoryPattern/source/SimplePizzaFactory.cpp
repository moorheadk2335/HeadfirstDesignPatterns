#include "SimplePizzaFactory.h"
#include "Pizza.h"
#include "Pizzas.h"

#include <iostream>

std::unique_ptr<Pizza> SimplePizzaFactory::createPizza(std::string type)
{
    if (type == "cheese") return std::make_unique<CheesePizza>();
    if (type == "pepperoni") return std::make_unique<PepperoniPizza>();
    if (type == "clam") return std::make_unique<ClamPizza>();
    if (type == "veggie") return std::make_unique<VeggiePizza>();

    // return nullptr if invalid pizza type is passed
    std::cerr << "Unknown pizza type: " << type << std::endl;
    return std::unique_ptr<Pizza>();
}
