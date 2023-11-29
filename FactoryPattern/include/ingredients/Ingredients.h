#ifndef INGREDIENTS_H
#define INGREDIENTS_H

#include <string>

class Ingredient {
private:
    std::string name;

public:
    Ingredient(std::string name) : name(name) { };
    virtual ~Ingredient() { };

    std::string getName() {
        return name;
    };
};

class Dough : public Ingredient {
public:
    Dough(std::string name) : Ingredient(name) { };
    virtual ~Dough() { };
};
class Sauce : public Ingredient {
public:
    Sauce(std::string name) : Ingredient(name) { };
    virtual ~Sauce() { };
};
class Cheese : public Ingredient {
public:
    Cheese(std::string name) : Ingredient(name) { };
    virtual ~Cheese() { };
};
class Veggies : public Ingredient {
public:
    Veggies(std::string name) : Ingredient(name) { };
    virtual ~Veggies() { };
};
class Pepperoni : public Ingredient {
public:
    Pepperoni(std::string name) : Ingredient(name) { };
    virtual ~Pepperoni() { };
};
class Clams : public Ingredient {
public:
    Clams(std::string name) : Ingredient(name) { };
    virtual ~Clams() { };
};

#endif //INGREDIENTS_H