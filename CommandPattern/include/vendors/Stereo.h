#ifndef STEREO_H
#define STEREO_H

#include <iostream>

class Stereo {
    uint8_t volume = 0;

public:
    void on() {
        std::cout << "Turning stereo on" << std::endl;
    };
    
    void off() {
        std::cout << "Turning stereo off" << std::endl;
    };
    
    void setCd() {
        std::cout << "Setting stereo to CD mode" << std::endl;
    };
    
    void setDvd() {
        std::cout << "Setting stereo to DVD mode" << std::endl;
    };
    
    void setRadio() {
        std::cout << "Setting stereo to radio mode" << std::endl;
    };
    
    void setVolume(uint8_t newVolume) {
        volume = newVolume;
        std::cout << "Turing stereo volume to " << unsigned(volume) << std::endl;
    };
};

#endif //STEREO_H