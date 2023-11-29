#ifndef NY_PIZZAS_H
#define NY_PIZZAS_H

#include "Pizza.h"
#include "PizzaIngredientFactory.h"

#include <iostream>

class NYStyleCheesePizza : public Pizza {
    const std::string myName = "NY Style Sauce and Cheese Pizza";

public:
    NYStyleCheesePizza()
     : Pizza(
        myName,
        "Thin Crust Dough",
        "Marinara Sauce",
        {"Grated Reggiano Cheese"}) { };

    NYStyleCheesePizza(PizzaIngredientFactory &ingredientFactory)
     : Pizza(
        myName,
        ingredientFactory.createCheese().getName(),
        ingredientFactory.createSauce().getName(),
        {
            ingredientFactory.createCheese().getName()
        }
     ) { };
};

class NYStylePepperoniPizza : public Pizza {
    const std::string myName = "NY Style Pepperoni Pizza";

public:
    NYStylePepperoniPizza()
     : Pizza(
        myName,
        "Thin Crust Dough",
        "Marinara Sauce",
        {"Grated Reggiano Cheese", "Sliced Pepperoni", "Garlic", "Onion", "Mushrooms", "Red Pepper"}) { };
};

class NYStyleClamPizza : public Pizza {
    const std::string myName = "NY Style Clam Pizza";

public:
    NYStyleClamPizza()
     : Pizza(
        myName,
        "Thin Crust Dough",
        "Marinara Sauce",
        {"Grated Reggiano Cheese", "Fresh Clams from Long Island Sound"}) { };
};

class NYStyleVeggiePizza : public Pizza {
    const std::string myName = "NY Style Veggie Pizza";

public:
    NYStyleVeggiePizza()
     : Pizza(
        myName,
        "Thin Crust Dough",
        "Marinara Sauce",
        {"Grated Reggiano Cheese", "Garlic", "Onion", "Mushrooms", "Red Pepper"}) { };
};

#endif //NY_PIZZAS_H