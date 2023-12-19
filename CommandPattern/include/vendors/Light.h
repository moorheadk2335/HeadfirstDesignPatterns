#ifndef LIGHT_H
#define LIGHT_H

#include <iostream>

class Light {
public:
    void on() {
        std::cout << "Turning the light on" << std::endl;
    };

    void off() {
        std::cout << "Turning the light off" << std::endl;
    };
};

#endif //LIGHT_H