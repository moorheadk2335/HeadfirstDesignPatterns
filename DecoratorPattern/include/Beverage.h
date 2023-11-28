#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <string>

class Beverage {
public:
    enum Size {
        TALL,
        GRANDE,
        VENTI,
        NUMBER_OF_SIZES
    };

    Size size = GRANDE;

    std::string description;

    Beverage(std::string description, Size size) : description(description), size(size) { };
    virtual ~Beverage() { };

    virtual std::string GetDescription() {
        return description;
    };

    virtual float Cost() = 0;

    void SetSize(Size newSize) {
        size = newSize;
    };

    Size GetSize() {
        return size;
    };
};

#endif //BEVERAGE_H