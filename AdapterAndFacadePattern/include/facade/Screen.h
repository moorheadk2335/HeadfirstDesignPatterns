#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>

class Screen {
public:
    void up() {
        std::cout << "Moving screen up" << std::endl;
    }

    void down() {
        std::cout << "Moving screen down" << std::endl;
    }
};

#endif //SCREEN_H