#ifndef STREAMING_PLAYER_H
#define STREAMING_PLAYER_H

#include "Amplifier.h"

#include <iostream>
#include <string>

class StreamingPlayer {
public:
    void on() {
        std::cout << "Turning streaming player on" << std::endl;
    }

    void off() {
        std::cout << "Turning streaming player off" << std::endl;
    }

    void pause() {
        std::cout << "Pausing streaming player" << std::endl;
    }

    void play(std::string name) {
        std::cout << "Playing " << name << std::endl;
    }

    void setTwoChannelAudio() {
        std::cout << "Setting audio to two channels" << std::endl;
    }

    void setSurroundAudio() {
        std::cout << "Setting audio to surround" << std::endl;
    }

    void stop() {
        std::cout << "Stopping stremaing player" << std::endl;
    }
};

#endif //STREAMING_PLAYER_H