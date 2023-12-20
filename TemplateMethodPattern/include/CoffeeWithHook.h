#ifndef COFFE_WITH_HOOK_H
#define COFFE_WITH_HOOK_H

#include "CaffeineBeverageWithHook.h"

#include <string>

class CoffeeWithHook : public CaffeineBeverageWithHook {
private:
    std::string getUserInput();

public:
    CoffeeWithHook() : CaffeineBeverageWithHook("Coffee") { }

    void brew() override;
    void addCondiments() override;
    bool customerWantsCondiments() override;
};

#endif //COFFE_WITH_HOOK_H