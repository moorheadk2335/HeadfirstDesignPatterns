#ifndef PROJECTOR_H
#define PROJECTOR_H

#include <iostream>

class Projector {
public:
    void on() {
        std::cout << "Turning projector on" << std::endl;
    }

    void off() {
        std::cout << "Turning projector off" << std::endl;
    }

    void tvMode() {
        std::cout << "Setting projector to TV mode" << std::endl;
    }

    void wideScreenMode() {
        std::cout << "Setting projector to wide screen mode" << std::endl;
    }
};

#endif //PROJECTOR_H