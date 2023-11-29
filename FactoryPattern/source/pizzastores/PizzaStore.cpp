#include "PizzaStore.h"

void PizzaStore::makePizza(Pizza &pizza)
{
    pizza.prepare();
    pizza.bake();
    pizza.cut();
    pizza.box();

    std::cout << std::endl;
}

std::unique_ptr<Pizza> PizzaStore::orderPizza(std::string type)
{
    std::unique_ptr<Pizza> pizza = createPizza(type);

    if (pizza) makePizza(*pizza);

    return pizza;
}

std::unique_ptr<Pizza> PizzaStore::orderLocalPizza(std::string type)
{
    std::unique_ptr<Pizza> pizza = createLocalPizza(type);

    if (pizza) makePizza(*pizza);

    return pizza;

}
