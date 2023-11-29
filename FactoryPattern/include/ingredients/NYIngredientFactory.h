#ifndef NY_INGREDIENT_FACTORY_H
#define NY_INGREDIENT_FACTORY_H

#include "PizzaIngredientFactory.h"
#include "CommonIngredients.h"
#include "NYIngredients.h"

class NYIngredientFactory : public PizzaIngredientFactory {
public:
    virtual Dough createDough() {
        return ThinCrustDough();
	};

    virtual Sauce createSauce() {
        return MarinaraSauce();
	};

    virtual Cheese createCheese() {
        return ReggianoCheese();
	};

    virtual std::vector<Veggies> createVeggies() {
        return {Garlic(), Onion(), Mushroom(), RedPepper()};
	};

    virtual Pepperoni createPepperoni() {
        return SlicedPepperoni();
	};

    virtual Clams createClams() {
        return FreshClams();
	};
};

#endif //NY_INGREDIENT_FACTORY_H