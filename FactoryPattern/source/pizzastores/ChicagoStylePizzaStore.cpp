#include "PizzaStores.h"
#include "ChicagoPizzas.h"

std::unique_ptr<Pizza> ChicagoStylePizzaStore::createPizza(std::string type) {
    if (type == "cheese") return std::make_unique<ChicagoCheesePizza>();
    if (type == "pepperoni") return std::make_unique<ChicagoPepperoniPizza>();
    if (type == "clam") return std::make_unique<ChicagoClamPizza>();
    if (type == "veggie") return std::make_unique<ChicagoVeggiePizza>();

    // return nullptr if invalid pizza type is passed
    std::cerr << "Unknown pizza type: " << type << std::endl;
    return std::unique_ptr<Pizza>();
}

std::unique_ptr<Pizza> ChicagoStylePizzaStore::createLocalPizza(std::string type) {
    if (type == "cheese") return std::make_unique<ChicagoCheesePizza>(*ingredientFactory);
    if (type == "pepperoni") return std::make_unique<ChicagoPepperoniPizza>(*ingredientFactory);
    if (type == "clam") return std::make_unique<ChicagoClamPizza>(*ingredientFactory);
    if (type == "veggie") return std::make_unique<ChicagoVeggiePizza>(*ingredientFactory);

    // return nullptr if invalid pizza type is passed
    std::cerr << "Unknown pizza type: " << type << std::endl;
    return std::unique_ptr<Pizza>();
}
