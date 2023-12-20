#ifndef COFFEE_H
#define COFFEE_H

#include "CaffeineBeverage.h"

class Coffee : public CaffeineBeverage {
public:
    Coffee() : CaffeineBeverage("Coffee") { }

    void brew() override;
    void addCondiments() override;
};

#endif //COFFEE_H