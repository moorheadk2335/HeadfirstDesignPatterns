#ifndef TUNER_H
#define TUNER_H

#include <iostream>

class Tuner {
private:
    float frequency = 0.0;

public:
    void on() {
        std::cout << "Turning tuner on" << std::endl;
    }

    void off() {
        std::cout << "Turning tuner off" << std::endl;
    }

    void setAm() {
        std::cout << "Setting tuner to AM mode" << std::endl;
    }

    void setFm() {
        std::cout << "Setting tuner to FM mode" << std::endl;
    }

    void setFrequency(float frequency) {
        std::cout << "Setting tuner frequency to " << frequency << std::endl;
        this->frequency = frequency;
    }
};

#endif //TUNER_H