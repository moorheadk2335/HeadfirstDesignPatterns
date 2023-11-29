#ifndef PIZZAS_H
#define PIZZAS_H

#include "Pizza.h"
#include "PizzaIngredientFactory.h"

#include <iostream>

class ChicagoCheesePizza : public Pizza {
    const std::string myName = "Chicago Style Deep Dish Cheese Pizza";

public:
    // Factory Method
    ChicagoCheesePizza()
     : Pizza(
        myName,
        "Extra Thick Crust Dough",
        "Plum Tomato Sauce",
        {"Shredded Mozzarella Cheese"}) { };

    // Abstract Factory Method
    ChicagoCheesePizza(PizzaIngredientFactory &ingredientFactory)
     : Pizza(
        myName,
        ingredientFactory.createDough().getName(),
        ingredientFactory.createSauce().getName(),
        {
            ingredientFactory.createCheese().getName()
        }
     ) { };

    void cut() override {
        std::cout << "Cutting the pizza into square slices" << std::endl;
    };
};

class ChicagoPepperoniPizza : public Pizza {
    const std::string myName = "Chicago Style Pepperoni Pizza";

public:
    // Factory Method
    ChicagoPepperoniPizza()
     : Pizza(
        "Chicago Style Pepperoni Pizza",
        "Extra Thick Crust Dough",
        "Plum Tomato Sauce",
        {"Shredded Mozzarella Cheese", "Black Olives", "Spinach", "Eggplant", "Sliced Pepperoni"}) { };
        
    // Abstract Factory Method
    ChicagoPepperoniPizza(PizzaIngredientFactory &ingredientFactory)
     : Pizza(
        myName,
        // This approach is somewhat bad due to the loss of type safety, but 
        // for brevity I'll maintain the same constructor method for Pizza as the Factory Method
        ingredientFactory.createDough().getName(),
        ingredientFactory.createSauce().getName(),
        { 
            ingredientFactory.createPepperoni().getName(),
            ingredientFactory.createCheese().getName()
        }

     ) {
        for (auto ingredient : ingredientFactory.createVeggies()) {
            toppings.push_back(ingredient.getName());
        }
     };

    void cut() override {
        std::cout << "Cutting the pizza into square slices" << std::endl;
    };
};

class ChicagoClamPizza : public Pizza {
    const std::string myName = "Chicago Style Clam Pizza";

public:
    // Factory Method
    ChicagoClamPizza()
     : Pizza(
        myName,
        "Extra Thick Crust Dough",
        "Plum Tomato Sauce",
        {"Shredded Mozzarella Cheese", "Frozen Clams from Chesapeake Bay"}) { };

    // Abstract Factory Method
    ChicagoClamPizza(PizzaIngredientFactory &ingredientFactory)
     : Pizza(
        myName,
        ingredientFactory.createDough().getName(),
        ingredientFactory.createSauce().getName(),
        {
            ingredientFactory.createCheese().getName(),
            ingredientFactory.createClams().getName()
        }
     ) { };

    void cut() override {
        std::cout << "Cutting the pizza into square slices" << std::endl;
    };
};

class ChicagoVeggiePizza : public Pizza {
    std::string myName = "Chicago Style Veggie Pizza";

public:
    ChicagoVeggiePizza()
     : Pizza(
        myName,
        "Extra Thick Crust Dough",
        "Plum Tomato Sauce",
        {"Shredded Mozzarella Cheese", "Black Olives", "Spinach", "Eggplant"}) { };

    ChicagoVeggiePizza(PizzaIngredientFactory &ingredientFactory) 
     : Pizza(
        myName,
        ingredientFactory.createDough().getName(),
        ingredientFactory.createSauce().getName(),
        {
            ingredientFactory.createCheese().getName()
        }
     ) {
        for (auto ingredient : ingredientFactory.createVeggies()) {
            toppings.push_back(ingredient.getName());
        }
     }

    void cut() override {
        std::cout << "Cutting the pizza into square slices" << std::endl;
    };
};

#endif //PIZZAS_H