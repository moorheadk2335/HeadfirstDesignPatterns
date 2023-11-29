#ifndef PIZZA_STORES_H
#define PIZZA_STORES_H

#include "PizzaStore.h"
#include "SimplePizzaFactory.h"

#include "NYIngredientFactory.h"
#include "ChicagoIngredientFactory.h"

#include <memory>

class NYStylePizzaStore : public PizzaStore {
public:
    NYStylePizzaStore() : PizzaStore(std::make_unique<NYIngredientFactory>()) { };
    virtual std::unique_ptr<Pizza> createPizza(std::string type) override;
    virtual std::unique_ptr<Pizza> createLocalPizza(std::string type) override;
};

class ChicagoStylePizzaStore : public PizzaStore {
public:
    ChicagoStylePizzaStore() : PizzaStore(std::make_unique<ChicagoIngredientFactory>()) { };
    virtual std::unique_ptr<Pizza> createPizza(std::string type) override;
    virtual std::unique_ptr<Pizza> createLocalPizza(std::string type) override;
};



#endif //PIZZA_STORES_H