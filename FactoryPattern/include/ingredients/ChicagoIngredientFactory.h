#ifndef CHICHAGO_INGREDIENT_FACTORY_H
#define CHICHAGO_INGREDIENT_FACTORY_H

#include "PizzaIngredientFactory.h"
#include "CommonIngredients.h"
#include "ChicagoIngredients.h"

class ChicagoIngredientFactory : public PizzaIngredientFactory {
public:
    virtual Dough createDough() {
        return ThickCrustDough();
	};

    virtual Sauce createSauce() {
        return PlumTomatoSauce();
	};

    virtual Cheese createCheese() {
        return MozzarellaCheese();
	};

    virtual std::vector<Veggies> createVeggies() {
        return {Eggplant(), Spinach(), BlackOlives()};
	};

    virtual Pepperoni createPepperoni() {
        return SlicedPepperoni();
	};

    virtual Clams createClams() {
        return FrozenClams();
	};
};

#endif //CHICHAGO_INGREDIENT_FACTORY_H