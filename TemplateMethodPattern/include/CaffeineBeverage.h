#ifndef CAFFEINE_BEVERAGE_H
#define CAFFEINE_BEVERAGE_H

#include <string>

class CaffeineBeverage {
private:
    std::string name;

protected:
    CaffeineBeverage(std::string name) : name(name) { };

public:
    virtual ~CaffeineBeverage() { };

    virtual void prepareRecipe() final;
    void boilWater();
    virtual void brew() = 0;
    void pourInCup();
    virtual void addCondiments() = 0;

    virtual std::string getName() final {return name; }
};

#endif //CAFFEINE_BEVERAGE_H