#ifndef PIZZA_STORE_H
#define PIZZA_STORE_H

#include "Pizza.h"
#include "PizzaIngredientFactory.h"

#include <string>
#include <memory>

class PizzaStore {
private:
    void makePizza(Pizza &pizza);

protected:
    virtual std::unique_ptr<Pizza> createPizza(std::string type) = 0;
    virtual std::unique_ptr<Pizza> createLocalPizza(std::string type) = 0;
    std::unique_ptr<PizzaIngredientFactory> ingredientFactory;

public:
    PizzaStore(std::unique_ptr<PizzaIngredientFactory> ingredientFactory)
     : ingredientFactory(std::move(ingredientFactory)) { };
    virtual ~PizzaStore() { };

    std::unique_ptr<Pizza> orderPizza(std::string type);
    std::unique_ptr<Pizza> orderLocalPizza(std::string type);
};

#endif //PIZZA_STORE_H