#ifndef THEATER_LIGHTS_H
#define THEATER_LIGHTS_H

#include <iostream>

class TheaterLights {
    float lightPercentage;
public:
    void on() {
        std::cout << "Turning theater lights on" << std::endl;
    }

    void off() {
        std::cout << "Turning theater lights off" << std::endl;
    }

    void dim(float lightPercentage) {
        std::cout << "Setting theater lights " << lightPercentage<< std::endl;
        this->lightPercentage = lightPercentage;
    }
};

#endif //THEATER_LIGHTS_H