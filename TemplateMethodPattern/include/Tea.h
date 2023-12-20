#ifndef TEA_H
#define TEA_H

#include "CaffeineBeverage.h"

class Tea : public CaffeineBeverage {
public:
    Tea() : CaffeineBeverage("Tea") { }

    void brew() override;
    void addCondiments() override;
};

#endif //TEA_H