#include "PizzaStore.h"
#include "PizzaStores.h"
#include "SimplePizzaFactory.h"
#include "Pizza.h"

#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<PizzaStore> nyPizzaStore = std::make_unique<NYStylePizzaStore>();
    std::unique_ptr<Pizza> nyPizza = nyPizzaStore->orderPizza("cheese");
    
    std::unique_ptr<PizzaStore> chicagoPizzaStore = std::make_unique<ChicagoStylePizzaStore>();
    std::unique_ptr<Pizza> chicagoPizza = chicagoPizzaStore->orderLocalPizza("clam");
    std::unique_ptr<Pizza> badPizza = chicagoPizzaStore->orderLocalPizza("taco");
    
}
