#ifndef TV_H
#define TV_H

#include <iostream>

class TV {
public:
    void on() {
        std::cout << "Turning TV on" << std::endl;
    };
    
    void off() {
        std::cout << "Turning TV off" << std::endl;
    };
};

#endif //TV_H