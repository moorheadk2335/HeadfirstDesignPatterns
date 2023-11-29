#include "PizzaStores.h"
#include "NYPizzas.h"

std::unique_ptr<Pizza> NYStylePizzaStore::createPizza(std::string type) {
    if (type == "cheese") return std::make_unique<NYStyleCheesePizza>();
    if (type == "pepperoni") return std::make_unique<NYStylePepperoniPizza>();
    if (type == "clam") return std::make_unique<NYStyleClamPizza>();
    if (type == "veggie") return std::make_unique<NYStyleVeggiePizza>();

    // return nullptr if invalid pizza type is passed
    std::cerr << "Unknown pizza type: " << type << std::endl;
    return std::unique_ptr<Pizza>();
}

std::unique_ptr<Pizza> NYStylePizzaStore::createLocalPizza(std::string type) {
    if (type == "cheese") return std::make_unique<NYStyleCheesePizza>(*ingredientFactory);
    // TODO
    // if (type == "pepperoni") return std::make_unique<NYStylePepperoniPizza>(ingredientFactory);
    // if (type == "clam") return std::make_unique<NYStyleClamPizza>(ingredientFactory);
    // if (type == "veggie") return std::make_unique<NYStyleVeggiePizza>(ingredientFactory);

    // return nullptr if invalid pizza type is passed
    std::cerr << "Unknown pizza type: " << type << std::endl;
    return std::unique_ptr<Pizza>();
}
