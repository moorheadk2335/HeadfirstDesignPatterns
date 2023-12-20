#ifndef CAFFEINE_BEVERAGE_WITH_HOOK_H
#define CAFFEINE_BEVERAGE_WITH_HOOK_H

#include <string>

class CaffeineBeverageWithHook {
private:
    std::string name;

protected:
    CaffeineBeverageWithHook(std::string name) : name(name) { };

public:
    virtual ~CaffeineBeverageWithHook() { };

    virtual void prepareRecipe() final;
    void boilWater();
    virtual void brew() = 0;
    void pourInCup();
    virtual void addCondiments() = 0;
    virtual bool customerWantsCondiments() { return true; }

    virtual std::string getName() final {return name; }
};

#endif //CAFFEINE_BEVERAGE_WITH_HOOK_H