#ifndef PIZZA_INGREDIENT_FACTORY_H
#define PIZZA_INGREDIENT_FACTORY_H

#include "Ingredients.h"

#include <vector>

class PizzaIngredientFactory {
public:
    virtual ~PizzaIngredientFactory() { };

    virtual Dough createDough() = 0;
    virtual Sauce createSauce() = 0;
    virtual Cheese createCheese() = 0;
    virtual std::vector<Veggies> createVeggies() = 0;
    virtual Pepperoni createPepperoni() = 0;
    virtual Clams createClams() = 0;
};

#endif //PIZZA_INGREDIENT_FACTORY_H