#ifndef HOT_TUB_H
#define HOT_TUB_H

#include <iostream>

class HotTub {
public:
    void on() {
        std::cout << "Turning hot tub on" << std::endl;
    };

    void off() {
        std::cout << "Turning hot tub off" << std::endl;
    };
};

#endif //HOT_TUB_H