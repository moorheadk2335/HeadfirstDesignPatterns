#ifndef POPCORN_POPPER_H
#define POPCORN_POPPER_H

#include <iostream>

class PopcornPopper {
public:
    void on() {
        std::cout << "Turning popcorn popper on" << std::endl;
    }

    void off() {
        std::cout << "Turning popcorn popper off" << std::endl;
    }

    void pop() {
        std::cout << "Popping popcorn" << std::endl;
    }
};

#endif //POPCORN_POPPER_H