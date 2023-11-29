#ifndef PIZZA_H
#define PIZZA_H

#include <string>
#include <iostream>
#include <vector>

class Pizza {
protected:
    const std::string &name;
    std::string dough;
    std::string sauce;
    std::vector<std::string> toppings;

public:
    Pizza(const std::string &name, std::string dough, std::string sauce, std::vector<std::string> toppings)
     : name(name), dough(dough), sauce(sauce), toppings(toppings) { };
    virtual ~Pizza() { };

    virtual void prepare();
    virtual void bake();
    virtual void cut();
    virtual void box();

    std::string getName();
};

#endif //PIZZA_H